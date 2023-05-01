#include "R4CameraBehavior_FrameWallRun.h"

UR4CameraBehavior_FrameWallRun::UR4CameraBehavior_FrameWallRun() {
    this->bApplyCurrentRotationOffsetOnEnd = true;
    this->BlendBeginPercent = 0.50f;
    this->BlendEndPercent = 0.90f;
}

