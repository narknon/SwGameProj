#include "R4CameraBehavior_OffsetRotationToUnobstructedSide.h"

UR4CameraBehavior_OffsetRotationToUnobstructedSide::UR4CameraBehavior_OffsetRotationToUnobstructedSide() {
    this->SideOffsetYaw = 60.00f;
    this->SideOffsetPitch = -15.00f;
    this->RearOffsetPitch = -30.00f;
    this->bUseRearOffsetWhenBothSidesObstructed = true;
    this->bUseRearOffsetWhenNoObstruction = true;
    this->bUseRearOffsetWhenOverThreshold = true;
    this->bMirrorOffsetWhenCameraIsInFrontOfHero = true;
    this->LargeOffsetThreshold = 90.00f;
    this->ObstructionCheckDistance = 1000.00f;
    this->ObstructionCheckRadius = 5.00f;
    this->bCancelBlendIfPlayerInput = true;
    this->BlendDuration = 0.50f;
}

