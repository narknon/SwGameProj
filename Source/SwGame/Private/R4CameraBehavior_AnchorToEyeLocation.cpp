#include "R4CameraBehavior_AnchorToEyeLocation.h"

UR4CameraBehavior_AnchorToEyeLocation::UR4CameraBehavior_AnchorToEyeLocation() {
    this->AttachToleranceHorizontal = 0.00f;
    this->AttachToleranceVertical = 0.00f;
    this->bDoOffsetTrace = false;
    this->OffsetTraceRadius = 5.00f;
    this->OffsetTraceOriginHeight = 0.00f;
    this->bKeepAnchorAboveNavSurface = false;
}

