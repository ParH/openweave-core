/*
 *
 *    Copyright (c) 2016-2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *      This file defines constant enumerations for all public
 *      and Nest Labs Weave Application Group Global IDs (AGGID).
 *    @note
 *      To register a new AGGID, a developer should petition for the new ID
 *      by making a suggested edit to this document:
 *      <https://docs.google.com/document/d/1xHLAcTvLZg2YGoJfbUb2nbPIvaCNuoygmdiNwC-PJHI>
 *      that includes the proposed ID and its purpose. Upon review, the
 *      maintainers of the document will approve and accept the change as a
 *      permanent record of the new ID. Once approved, new AGGID will be
 *      added to this file.
 *
 */

#ifndef WEAVEAPPGROUPGLOBALIDS_H_
#define WEAVEAPPGROUPGLOBALIDS_H_

#include <Weave/Core/WeaveVendorIdentifiers.hpp>

namespace nl {
namespace Weave {
namespace Profiles {
namespace Security {
namespace AppKeys {

/**
 * @brief Weave Application Group Global IDs (AGGID).
 */
enum WeaveAppGroupGlobalId
{
    kWeaveAppGroupGlobalId_Unspecified           = 0,        /**< Application Group Global ID is not specified. */

    /**
     * @brief Nest Labs Application Group Global IDs.
     *
     * @note Do not attempt to allocate these values yourself. These
     *       values are under administration by Nest Labs. Please make a
     *       formal request using the "Nest Weave: Nest Application Group
     *       Global ID Registry" <https://docs.google.com/document/d/1xHLAcTvLZg2YGoJfbUb2nbPIvaCNuoygmdiNwC-PJHI>.
     *
     *  @{
     */
    kWeaveAppGroupGlobalId_NestPhysicalAccess    = (kWeaveVendor_NestLabs << 16) | 0x0001,  /**< Nest Physical Access Group. */
    kWeaveAppGroupGlobalId_NestStructureSecurity = (kWeaveVendor_NestLabs << 16) | 0x0002,  /**< Nest Structure Security Group. */
    kWeaveAppGroupGlobalId_NestHVAC              = (kWeaveVendor_NestLabs << 16) | 0x0003,  /**< Nest HVAC Group. */

    /**
     *  @}
     */
};

} // namespace AppKeys
} // namespace Security
} // namespace Profiles
} // namespace Weave
} // namespace nl

#endif /* WEAVEAPPGROUPGLOBALIDS_H_ */
