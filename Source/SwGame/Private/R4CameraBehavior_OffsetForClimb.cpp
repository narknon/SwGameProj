#include "R4CameraBehavior_OffsetForClimb.h"

UR4CameraBehavior_OffsetForClimb::UR4CameraBehavior_OffsetForClimb() {
    this->MovementOffsetHorizontal = 160.00f;
    this->MovementOffsetVertical = 100.00f;
    this->RotationOffsetHorizontal = 0.00f;
    this->RotationOffsetVertical = 0.00f;
    this->FocusAdjustPercentage = 0.50f;
    this->bDoCollisionTrace = true;
    this->bWaitForTransition = false;
}

