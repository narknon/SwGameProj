#include "R4CameraBehavior_CollisionSoftPush.h"

UR4CameraBehavior_CollisionSoftPush::UR4CameraBehavior_CollisionSoftPush() {
    this->bOnlyModifyRotaitonWhilePlayerIsMoving = true;
    this->PlayerInputDelay = 0.25f;
    this->MaxPitchSpeed = 60.00f;
    this->MaxYawSpeed = 90.00f;
    this->OscillationDampingFactor = 7.50f;
    this->CornerOscillationDampingFactor = 3.00f;
    this->UnDampingFactor = 3.00f;
    this->InContactOffsetSmoothingPercentage = 0.75f;
    this->InContactOffsetSmoothingTime = 0.25f;
    this->ReturnToZeroOffsetSmoothingPercentage = 0.90f;
    this->ReturnToZeroOffsetSmoothingTime = 0.10f;
    this->bDebugDisableSmoothing = false;
    this->bDebugDisableOffset = false;
    this->bDebugDisablePlayerInputDelay = false;
}

