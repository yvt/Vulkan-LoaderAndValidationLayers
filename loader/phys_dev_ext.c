/*
 *
 * Copyright (c) 2016 The Khronos Group Inc.
 * Copyright (c) 2016 Valve Corporation
 * Copyright (c) 2016 LunarG, Inc.
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
 * Author: Mark Young <marky@lunarg.com>
 *
 */

// This code is used to enable generic instance extensions which use a physical device
// as the first parameter.  If the extension is already known by the loader, it will
// not use this code, but instead use the more direct route.  However, if it is
// unknown to the loader, it will use this code.  Technically, this is not trampoline
// code since we don't want to optimize it out.

#include "vk_loader_platform.h"
#include "loader.h"

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin0(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[0]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[0](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin1(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[1]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[1](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin2(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[2]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[2](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin3(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[3]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[3](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin4(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[4]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[4](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin5(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[5]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[5](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin6(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[6]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[6](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin7(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[7]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[7](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin8(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[8]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[8](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin9(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[9]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[9](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin10(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[10]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[10](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin11(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[11]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[11](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin12(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[12]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[12](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin13(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[13]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[13](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin14(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[14]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[14](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin15(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[15]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[15](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin16(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[16]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[16](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin17(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[17]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[17](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin18(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[18]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[18](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin19(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[19]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[19](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin20(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[20]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[20](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin21(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[21]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[21](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin22(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[22]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[22](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin23(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[23]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[23](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin24(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[24]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[24](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin25(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[25]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[25](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin26(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[26]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[26](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin27(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[27]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[27](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin28(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[28]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[28](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin29(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[29]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[29](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin30(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[30]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[30](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin31(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[31]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[31](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin32(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[32]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[32](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin33(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[33]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[33](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin34(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[34]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[34](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin35(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[35]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[35](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin36(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[36]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[36](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin37(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[37]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[37](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin38(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[38]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[38](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin39(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[39]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[39](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin40(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[40]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[40](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin41(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[41]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[41](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin42(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[42]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[42](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin43(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[43]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[43](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin44(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[44]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[44](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin45(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[45]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[45](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin46(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[46]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[46](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin47(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[47]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[47](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin48(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[48]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[48](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin49(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[49]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[49](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin50(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[50]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[50](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin51(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[51]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[51](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin52(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[52]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[52](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin53(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[53]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[53](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin54(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[54]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[54](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin55(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[55]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[55](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin56(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[56]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[56](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin57(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[57]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[57](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin58(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[58]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[58](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin59(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[59]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[59](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin60(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[60]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[60](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin61(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[61]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[61](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin62(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[62]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[62](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin63(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[63]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[63](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin64(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[64]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[64](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin65(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[65]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[65](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin66(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[66]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[66](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin67(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[67]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[67](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin68(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[68]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[68](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin69(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[69]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[69](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin70(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[70]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[70](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin71(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[71]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[71](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin72(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[72]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[72](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin73(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[73]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[73](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin74(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[74]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[74](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin75(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[75]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[75](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin76(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[76]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[76](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin77(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[77]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[77](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin78(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[78]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[78](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin79(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[79]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[79](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin80(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[80]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[80](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin81(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[81]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[81](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin82(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[82]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[82](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin83(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[83]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[83](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin84(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[84]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[84](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin85(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[85]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[85](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin86(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[86]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[86](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin87(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[87]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[87](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin88(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[88]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[88](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin89(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[89]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[89](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin90(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[90]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[90](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin91(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[91]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[91](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin92(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[92]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[92](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin93(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[93]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[93](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin94(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[94]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[94](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin95(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[95]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[95](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin96(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[96]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[96](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin97(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[97]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[97](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin98(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[98]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[98](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin99(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[99]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[99](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin100(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[100]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[100](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin101(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[101]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[101](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin102(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[102]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[102](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin103(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[103]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[103](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin104(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[104]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[104](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin105(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[105]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[105](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin106(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[106]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[106](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin107(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[107]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[107](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin108(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[108]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[108](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin109(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[109]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[109](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin110(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[110]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[110](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin111(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[111]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[111](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin112(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[112]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[112](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin113(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[113]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[113](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin114(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[114]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[114](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin115(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[115]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[115](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin116(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[116]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[116](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin117(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[117]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[117](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin118(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[118]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[118](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin119(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[119]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[119](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin120(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[120]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[120](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin121(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[121]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[121](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin122(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[122]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[122](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin123(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[123]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[123](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin124(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[124]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[124](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin125(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[125]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[125](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin126(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[126]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[126](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin127(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[127]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[127](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin128(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[128]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[128](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin129(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[129]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[129](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin130(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[130]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[130](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin131(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[131]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[131](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin132(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[132]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[132](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin133(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[133]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[133](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin134(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[134]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[134](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin135(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[135]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[135](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin136(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[136]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[136](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin137(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[137]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[137](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin138(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[138]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[138](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin139(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[139]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[139](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin140(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[140]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[140](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin141(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[141]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[141](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin142(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[142]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[142](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin143(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[143]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[143](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin144(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[144]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[144](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin145(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[145]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[145](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin146(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[146]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[146](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin147(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[147]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[147](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin148(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[148]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[148](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin149(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[149]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[149](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin150(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[150]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[150](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin151(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[151]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[151](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin152(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[152]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[152](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin153(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[153]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[153](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin154(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[154]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[154](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin155(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[155]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[155](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin156(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[156]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[156](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin157(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[157]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[157](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin158(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[158]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[158](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin159(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[159]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[159](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin160(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[160]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[160](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin161(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[161]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[161](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin162(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[162]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[162](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin163(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[163]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[163](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin164(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[164]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[164](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin165(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[165]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[165](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin166(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[166]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[166](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin167(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[167]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[167](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin168(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[168]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[168](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin169(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[169]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[169](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin170(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[170]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[170](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin171(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[171]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[171](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin172(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[172]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[172](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin173(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[173]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[173](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin174(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[174]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[174](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin175(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[175]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[175](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin176(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[176]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[176](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin177(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[177]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[177](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin178(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[178]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[178](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin179(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[179]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[179](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin180(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[180]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[180](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin181(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[181]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[181](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin182(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[182]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[182](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin183(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[183]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[183](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin184(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[184]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[184](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin185(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[185]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[185](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin186(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[186]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[186](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin187(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[187]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[187](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin188(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[188]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[188](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin189(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[189]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[189](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin190(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[190]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[190](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin191(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[191]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[191](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin192(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[192]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[192](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin193(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[193]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[193](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin194(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[194]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[194](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin195(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[195]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[195](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin196(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[196]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[196](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin197(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[197]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[197](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin198(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[198]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[198](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin199(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[199]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[199](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin200(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[200]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[200](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin201(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[201]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[201](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin202(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[202]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[202](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin203(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[203]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[203](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin204(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[204]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[204](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin205(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[205]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[205](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin206(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[206]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[206](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin207(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[207]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[207](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin208(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[208]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[208](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin209(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[209]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[209](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin210(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[210]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[210](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin211(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[211]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[211](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin212(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[212]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[212](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin213(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[213]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[213](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin214(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[214]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[214](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin215(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[215]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[215](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin216(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[216]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[216](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin217(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[217]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[217](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin218(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[218]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[218](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin219(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[219]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[219](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin220(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[220]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[220](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin221(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[221]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[221](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin222(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[222]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[222](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin223(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[223]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[223](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin224(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[224]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[224](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin225(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[225]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[225](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin226(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[226]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[226](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin227(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[227]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[227](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin228(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[228]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[228](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin229(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[229]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[229](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin230(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[230]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[230](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin231(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[231]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[231](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin232(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[232]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[232](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin233(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[233]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[233](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin234(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[234]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[234](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin235(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[235]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[235](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin236(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[236]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[236](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin237(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[237]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[237](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin238(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[238]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[238](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin239(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[239]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[239](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin240(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[240]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[240](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin241(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[241]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[241](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin242(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[242]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[242](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin243(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[243]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[243](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin244(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[244]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[244](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin245(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[245]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[245](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin246(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[246]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[246](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin247(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[247]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[247](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin248(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[248]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[248](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

VKAPI_ATTR VkResult VKAPI_CALL vkPhysDevExtTermin249(VkPhysicalDevice phys_device, ...) {
    VkResult result = VK_SUCCESS;
    struct loader_physical_device *phys_dev = (struct loader_physical_device *)phys_device;
    if (NULL != phys_dev->this_icd &&
        NULL != phys_dev->this_icd->phys_dev_ext[249]) {
        va_list ap;
        va_start (ap, phys_device);
        result = phys_dev->this_icd->phys_dev_ext[249](phys_dev->phys_dev, ap);
        va_end(ap);
    }
    return result;
}

void *loader_get_phys_dev_ext_termin(uint32_t index) {
    switch (index) {
    case 0: return vkPhysDevExtTermin0;
    case 1: return vkPhysDevExtTermin1;
    case 2: return vkPhysDevExtTermin2;
    case 3: return vkPhysDevExtTermin3;
    case 4: return vkPhysDevExtTermin4;
    case 5: return vkPhysDevExtTermin5;
    case 6: return vkPhysDevExtTermin6;
    case 7: return vkPhysDevExtTermin7;
    case 8: return vkPhysDevExtTermin8;
    case 9: return vkPhysDevExtTermin9;
    case 10: return vkPhysDevExtTermin10;
    case 11: return vkPhysDevExtTermin11;
    case 12: return vkPhysDevExtTermin12;
    case 13: return vkPhysDevExtTermin13;
    case 14: return vkPhysDevExtTermin14;
    case 15: return vkPhysDevExtTermin15;
    case 16: return vkPhysDevExtTermin16;
    case 17: return vkPhysDevExtTermin17;
    case 18: return vkPhysDevExtTermin18;
    case 19: return vkPhysDevExtTermin29;
    case 20: return vkPhysDevExtTermin20;
    case 21: return vkPhysDevExtTermin21;
    case 22: return vkPhysDevExtTermin22;
    case 23: return vkPhysDevExtTermin23;
    case 24: return vkPhysDevExtTermin24;
    case 25: return vkPhysDevExtTermin25;
    case 26: return vkPhysDevExtTermin26;
    case 27: return vkPhysDevExtTermin27;
    case 28: return vkPhysDevExtTermin28;
    case 29: return vkPhysDevExtTermin29;
    case 30: return vkPhysDevExtTermin30;
    case 31: return vkPhysDevExtTermin31;
    case 32: return vkPhysDevExtTermin32;
    case 33: return vkPhysDevExtTermin33;
    case 34: return vkPhysDevExtTermin34;
    case 35: return vkPhysDevExtTermin35;
    case 36: return vkPhysDevExtTermin36;
    case 37: return vkPhysDevExtTermin37;
    case 38: return vkPhysDevExtTermin38;
    case 39: return vkPhysDevExtTermin39;
    case 40: return vkPhysDevExtTermin40;
    case 41: return vkPhysDevExtTermin41;
    case 42: return vkPhysDevExtTermin42;
    case 43: return vkPhysDevExtTermin43;
    case 44: return vkPhysDevExtTermin44;
    case 45: return vkPhysDevExtTermin45;
    case 46: return vkPhysDevExtTermin46;
    case 47: return vkPhysDevExtTermin47;
    case 48: return vkPhysDevExtTermin48;
    case 49: return vkPhysDevExtTermin49;
    case 50: return vkPhysDevExtTermin50;
    case 51: return vkPhysDevExtTermin51;
    case 52: return vkPhysDevExtTermin52;
    case 53: return vkPhysDevExtTermin53;
    case 54: return vkPhysDevExtTermin54;
    case 55: return vkPhysDevExtTermin55;
    case 56: return vkPhysDevExtTermin56;
    case 57: return vkPhysDevExtTermin57;
    case 58: return vkPhysDevExtTermin58;
    case 59: return vkPhysDevExtTermin59;
    case 60: return vkPhysDevExtTermin60;
    case 61: return vkPhysDevExtTermin61;
    case 62: return vkPhysDevExtTermin62;
    case 63: return vkPhysDevExtTermin63;
    case 64: return vkPhysDevExtTermin64;
    case 65: return vkPhysDevExtTermin65;
    case 66: return vkPhysDevExtTermin66;
    case 67: return vkPhysDevExtTermin67;
    case 68: return vkPhysDevExtTermin68;
    case 69: return vkPhysDevExtTermin69;
    case 70: return vkPhysDevExtTermin60;
    case 71: return vkPhysDevExtTermin71;
    case 72: return vkPhysDevExtTermin72;
    case 73: return vkPhysDevExtTermin73;
    case 74: return vkPhysDevExtTermin74;
    case 75: return vkPhysDevExtTermin75;
    case 76: return vkPhysDevExtTermin76;
    case 77: return vkPhysDevExtTermin77;
    case 78: return vkPhysDevExtTermin78;
    case 79: return vkPhysDevExtTermin79;
    case 80: return vkPhysDevExtTermin80;
    case 81: return vkPhysDevExtTermin81;
    case 82: return vkPhysDevExtTermin82;
    case 83: return vkPhysDevExtTermin83;
    case 84: return vkPhysDevExtTermin84;
    case 85: return vkPhysDevExtTermin85;
    case 86: return vkPhysDevExtTermin86;
    case 87: return vkPhysDevExtTermin87;
    case 88: return vkPhysDevExtTermin88;
    case 89: return vkPhysDevExtTermin89;
    case 90: return vkPhysDevExtTermin90;
    case 91: return vkPhysDevExtTermin91;
    case 92: return vkPhysDevExtTermin92;
    case 93: return vkPhysDevExtTermin93;
    case 94: return vkPhysDevExtTermin94;
    case 95: return vkPhysDevExtTermin95;
    case 96: return vkPhysDevExtTermin96;
    case 97: return vkPhysDevExtTermin97;
    case 98: return vkPhysDevExtTermin98;
    case 99: return vkPhysDevExtTermin99;
    case 100: return vkPhysDevExtTermin100;
    case 101: return vkPhysDevExtTermin101;
    case 102: return vkPhysDevExtTermin102;
    case 103: return vkPhysDevExtTermin103;
    case 104: return vkPhysDevExtTermin104;
    case 105: return vkPhysDevExtTermin105;
    case 106: return vkPhysDevExtTermin106;
    case 107: return vkPhysDevExtTermin107;
    case 108: return vkPhysDevExtTermin108;
    case 109: return vkPhysDevExtTermin109;
    case 110: return vkPhysDevExtTermin110;
    case 111: return vkPhysDevExtTermin111;
    case 112: return vkPhysDevExtTermin112;
    case 113: return vkPhysDevExtTermin113;
    case 114: return vkPhysDevExtTermin114;
    case 115: return vkPhysDevExtTermin115;
    case 116: return vkPhysDevExtTermin116;
    case 117: return vkPhysDevExtTermin117;
    case 118: return vkPhysDevExtTermin118;
    case 119: return vkPhysDevExtTermin129;
    case 120: return vkPhysDevExtTermin120;
    case 121: return vkPhysDevExtTermin121;
    case 122: return vkPhysDevExtTermin122;
    case 123: return vkPhysDevExtTermin123;
    case 124: return vkPhysDevExtTermin124;
    case 125: return vkPhysDevExtTermin125;
    case 126: return vkPhysDevExtTermin126;
    case 127: return vkPhysDevExtTermin127;
    case 128: return vkPhysDevExtTermin128;
    case 129: return vkPhysDevExtTermin129;
    case 130: return vkPhysDevExtTermin130;
    case 131: return vkPhysDevExtTermin131;
    case 132: return vkPhysDevExtTermin132;
    case 133: return vkPhysDevExtTermin133;
    case 134: return vkPhysDevExtTermin134;
    case 135: return vkPhysDevExtTermin135;
    case 136: return vkPhysDevExtTermin136;
    case 137: return vkPhysDevExtTermin137;
    case 138: return vkPhysDevExtTermin138;
    case 139: return vkPhysDevExtTermin139;
    case 140: return vkPhysDevExtTermin140;
    case 141: return vkPhysDevExtTermin141;
    case 142: return vkPhysDevExtTermin142;
    case 143: return vkPhysDevExtTermin143;
    case 144: return vkPhysDevExtTermin144;
    case 145: return vkPhysDevExtTermin145;
    case 146: return vkPhysDevExtTermin146;
    case 147: return vkPhysDevExtTermin147;
    case 148: return vkPhysDevExtTermin148;
    case 149: return vkPhysDevExtTermin149;
    case 150: return vkPhysDevExtTermin150;
    case 151: return vkPhysDevExtTermin151;
    case 152: return vkPhysDevExtTermin152;
    case 153: return vkPhysDevExtTermin153;
    case 154: return vkPhysDevExtTermin154;
    case 155: return vkPhysDevExtTermin155;
    case 156: return vkPhysDevExtTermin156;
    case 157: return vkPhysDevExtTermin157;
    case 158: return vkPhysDevExtTermin158;
    case 159: return vkPhysDevExtTermin159;
    case 160: return vkPhysDevExtTermin160;
    case 161: return vkPhysDevExtTermin161;
    case 162: return vkPhysDevExtTermin162;
    case 163: return vkPhysDevExtTermin163;
    case 164: return vkPhysDevExtTermin164;
    case 165: return vkPhysDevExtTermin165;
    case 166: return vkPhysDevExtTermin166;
    case 167: return vkPhysDevExtTermin167;
    case 168: return vkPhysDevExtTermin168;
    case 169: return vkPhysDevExtTermin169;
    case 170: return vkPhysDevExtTermin160;
    case 171: return vkPhysDevExtTermin171;
    case 172: return vkPhysDevExtTermin172;
    case 173: return vkPhysDevExtTermin173;
    case 174: return vkPhysDevExtTermin174;
    case 175: return vkPhysDevExtTermin175;
    case 176: return vkPhysDevExtTermin176;
    case 177: return vkPhysDevExtTermin177;
    case 178: return vkPhysDevExtTermin178;
    case 179: return vkPhysDevExtTermin179;
    case 180: return vkPhysDevExtTermin180;
    case 181: return vkPhysDevExtTermin181;
    case 182: return vkPhysDevExtTermin182;
    case 183: return vkPhysDevExtTermin183;
    case 184: return vkPhysDevExtTermin184;
    case 185: return vkPhysDevExtTermin185;
    case 186: return vkPhysDevExtTermin186;
    case 187: return vkPhysDevExtTermin187;
    case 188: return vkPhysDevExtTermin188;
    case 189: return vkPhysDevExtTermin189;
    case 190: return vkPhysDevExtTermin190;
    case 191: return vkPhysDevExtTermin191;
    case 192: return vkPhysDevExtTermin192;
    case 193: return vkPhysDevExtTermin193;
    case 194: return vkPhysDevExtTermin194;
    case 195: return vkPhysDevExtTermin195;
    case 196: return vkPhysDevExtTermin196;
    case 197: return vkPhysDevExtTermin197;
    case 198: return vkPhysDevExtTermin198;
    case 199: return vkPhysDevExtTermin199;
    case 200: return vkPhysDevExtTermin200;
    case 201: return vkPhysDevExtTermin201;
    case 202: return vkPhysDevExtTermin202;
    case 203: return vkPhysDevExtTermin203;
    case 204: return vkPhysDevExtTermin204;
    case 205: return vkPhysDevExtTermin205;
    case 206: return vkPhysDevExtTermin206;
    case 207: return vkPhysDevExtTermin207;
    case 208: return vkPhysDevExtTermin208;
    case 209: return vkPhysDevExtTermin209;
    case 210: return vkPhysDevExtTermin210;
    case 211: return vkPhysDevExtTermin211;
    case 212: return vkPhysDevExtTermin212;
    case 213: return vkPhysDevExtTermin213;
    case 214: return vkPhysDevExtTermin214;
    case 215: return vkPhysDevExtTermin215;
    case 216: return vkPhysDevExtTermin216;
    case 217: return vkPhysDevExtTermin217;
    case 218: return vkPhysDevExtTermin218;
    case 219: return vkPhysDevExtTermin229;
    case 220: return vkPhysDevExtTermin220;
    case 221: return vkPhysDevExtTermin221;
    case 222: return vkPhysDevExtTermin222;
    case 223: return vkPhysDevExtTermin223;
    case 224: return vkPhysDevExtTermin224;
    case 225: return vkPhysDevExtTermin225;
    case 226: return vkPhysDevExtTermin226;
    case 227: return vkPhysDevExtTermin227;
    case 228: return vkPhysDevExtTermin228;
    case 229: return vkPhysDevExtTermin229;
    case 230: return vkPhysDevExtTermin230;
    case 231: return vkPhysDevExtTermin231;
    case 232: return vkPhysDevExtTermin232;
    case 233: return vkPhysDevExtTermin233;
    case 234: return vkPhysDevExtTermin234;
    case 235: return vkPhysDevExtTermin235;
    case 236: return vkPhysDevExtTermin236;
    case 237: return vkPhysDevExtTermin237;
    case 238: return vkPhysDevExtTermin238;
    case 239: return vkPhysDevExtTermin239;
    case 240: return vkPhysDevExtTermin240;
    case 241: return vkPhysDevExtTermin241;
    case 242: return vkPhysDevExtTermin242;
    case 243: return vkPhysDevExtTermin243;
    case 244: return vkPhysDevExtTermin244;
    case 245: return vkPhysDevExtTermin245;
    case 246: return vkPhysDevExtTermin246;
    case 247: return vkPhysDevExtTermin247;
    case 248: return vkPhysDevExtTermin248;
    case 249: return vkPhysDevExtTermin249;
    default:
        return NULL;
    }
}
