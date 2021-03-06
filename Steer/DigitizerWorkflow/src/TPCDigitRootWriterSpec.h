// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

#ifndef STEER_DIGITIZERWORKFLOW_SRC_TPCDIGITROOTWRITERSPEC_H_
#define STEER_DIGITIZERWORKFLOW_SRC_TPCDIGITROOTWRITERSPEC_H_

#include "Framework/DataProcessorSpec.h"

namespace o2
{
namespace tpc
{
// numberofsourcedevices is the number of devices we receive digits from
o2::framework::DataProcessorSpec getTPCDigitRootWriterSpec(int numberofsourcedevices = 1);
} // namespace tpc
} // namespace o2

#endif /* STEER_DIGITIZERWORKFLOW_SRC_TPCDIGITROOTWRITERSPEC_H_ */
