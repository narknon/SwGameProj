#include "R4CameraBehavior_MaintainOffsets.h"

UR4CameraBehavior_MaintainOffsets::UR4CameraBehavior_MaintainOffsets() {
    this->bMaintainCameraSpaceOffsets = true;
    this->bMaintainWorldSpaceOffsets = true;
    this->bSkipHorizontalOffset = false;
}

