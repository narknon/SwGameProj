#include "RsAnimNode_SpeedWarping.h"

FRsAnimNode_SpeedWarping::FRsAnimNode_SpeedWarping() {
    this->bUseWarpingFactorFromInputPose = false;
    this->WarpingFactor = 0.00f;
    this->bCanAffectRootMotion = false;
    this->WarpingAxis = ERsSpeedWarpingAxis::X;
}

