/* Copyright (c) 2017 The Khronos Group Inc.
 * Copyright (C) 2017 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Chris Forbes <chrisforbes@google.com>
 */
#ifndef CORE_VALIDATION_DYNAMIC_BITSET_H_
#define CORE_VALIDATION_DYNAMIC_BITSET_H_

#ifdef _WIN32
/* Shim for ffs() missing on windows */
#include <intrin.h>
int ffs(int x) {
    unsigned long index;
    if (_BitScanForward(&index, unsigned long(x)))
        return int(index + 1);
    return 0;
}
#endif

/* Loosely based on std::bitset & std::vector<bool>. Provides a balance between
 * their properties.
 */

class dynamic_bitset
{
    typedef uint32_t BlockType;
    typedef std::vector<uint32_t>::iterator BlockIter;
    static const int bits_per_block = 8 * sizeof(BlockType);
    static const size_t npos = size_t(-1);      // Usual STL-style "not found" value

  public:
    // Construct a bitset containing all zeros, with the specified number of bits
    explicit dynamic_bitset(size_t num_bits)
        : blocks(num_bits / bits_per_block),
          num_bits(num_bits) {}

    // Bitwise or between bitsets
    friend dynamic_bitset operator |(dynamic_bitset const & a, dynamic_bitset const & b) {
        dynamic_bitset result(std::min(a.num_bits, b.num_bits));
        auto it_a = a.blocks.begin();
        auto it_b = b.blocks.begin();
        auto it_out = result.blocks.begin();
        for (; it_a != a.blocks.end() && it_b != b.blocks.end(); ++it_a, ++it_b) {
            *it_out = *it_a | *it_b;
        }
        return result;
    }

    // Bitwise and between bitsets.
    friend dynamic_bitset operator &(dynamic_bitset const & a, dynamic_bitset const & b) {
        dynamic_bitset result(std::min(a.num_bits, b.num_bits));
        auto it_a = a.blocks.begin();
        auto it_b = b.blocks.begin();
        auto it_out = result.blocks.begin();
        for (; it_a != a.blocks.end() && it_b != b.blocks.end(); ++it_a, ++it_b) {
            *it_out = *it_a & *it_b;
        }
        return result;
    }

    // Bitwise xor between bitsets.
    friend dynamic_bitset operator ^(dynamic_bitset const & a, dynamic_bitset const & b) {
        dynamic_bitset result(std::min(a.num_bits, b.num_bits));
        auto it_a = a.blocks.begin();
        auto it_b = b.blocks.begin();
        auto it_out = result.blocks.begin();
        for (; it_a != a.blocks.end() && it_b != b.blocks.end(); ++it_a, ++it_b) {
            *it_out = *it_a ^ *it_b;
        }
        return result;
    }

    // Helper for walking over the blocks including some range of bits.
    // Func is invoked for each block in the range in turn, with a mask
    // of which bits are within the range.
    template<typename Func>
    void iter_blocks_for_range(size_t first, size_t num, Func f) {
        auto first_block = blocks.begin() + first / bits_per_block;
        auto first_offset = first % bits_per_block;

        auto last = first + num;            // Bit _following_ end of the range
        auto last_block = blocks.begin() + last / bits_per_block;
        auto last_offset = last % bits_per_block;

        auto mask = ~((1u << first_offset) - 1);
        auto block = first_block;
        for (;block < last_block; ++block) {
            f(block, mask);
            mask = ~0u;
        }
        if (last_offset) {
            mask &= (1u << last_offset) - 1;
            f(block, mask);
        }
    }

    // Set a bit or range of bits in the bitset.
    void set(size_t first, size_t num = 1) {
        iter_blocks_for_range(first, num,
                              [](BlockIter it, BlockType mask) { *it |= mask; });
    }

    // Clear a bit or range of bits in the bitset.
    void clear(size_t first, size_t num = 1) {
        iter_blocks_for_range(first, num,
                              [](BlockIter it, BlockType mask) { *it &= ~mask; });
    }

    // Flip a bit or range of bits in the bitset.
    void flip(size_t first, size_t num = 1) {
        iter_blocks_for_range(first, num,
                              [](BlockIter it, BlockType mask) { *it ^= mask; });
    }

    // Find the first bit after <prev> that is set, or npos if none.
    size_t find(size_t prev = npos) {
        ++prev;     // Next possible bit we could want
        auto block = blocks.begin() + prev / bits_per_block;
        auto offset = prev % bits_per_block;
        auto mask = ~((1u << offset) - 1);

        for (;block != blocks.end(); ++block) {
            auto val = *block & mask;
            if (val) {
                size_t result = ffs(val) - 1 + bits_per_block * (block - blocks.begin());
                // Some care here: bits >= num_bits don't actually exist, even if they
                // do in the backing vector. Never return the index of one.
                return result < num_bits ? result : npos;
            }
            mask = ~0u;
        }

        return npos;
    }

  private:
    std::vector<BlockType> blocks;
    size_t num_bits;
};

#endif