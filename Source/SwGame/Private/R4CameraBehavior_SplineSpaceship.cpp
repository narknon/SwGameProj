#include "R4CameraBehavior_SplineSpaceship.h"

UR4CameraBehavior_SplineSpaceship::UR4CameraBehavior_SplineSpaceship() {
    this->InputRampSpeed = 5.00f;
    this->ScreenBounds = 0.70f;
    this->FollowDistance = 6500.00f;
    this->FollowHeight = 2500.00f;
    this->FOVAngle = 60.00f;
    this->bDebugDisableSmoothing = false;
    this->bDebugDisableOffsets = false;
}

