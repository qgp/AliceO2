// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// \file   MIDWorkflow/RecoWorkflowMC.h
/// \brief  Definition of the reconstruction workflow for MID MC
/// \author Diego Stocco <Diego.Stocco at cern.ch>
/// \date   11 April 2019

#ifndef O2_MID_RECOWORKFLOWMCSPEC_H
#define O2_MID_RECOWORKFLOWMCSPEC_H

#include "Framework/WorkflowSpec.h"

namespace o2
{
namespace mid
{
framework::WorkflowSpec getRecoWorkflowMC();
}
} // namespace o2

#endif //O2_MID_RECOWORKFLOWMCSPEC_H
