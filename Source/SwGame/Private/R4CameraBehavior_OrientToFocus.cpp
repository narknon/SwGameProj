#include "R4CameraBehavior_OrientToFocus.h"

UR4CameraBehavior_OrientToFocus::UR4CameraBehavior_OrientToFocus() {
    this->YawSlack = 0.00f;
    this->MinYawOffset = 0.00f;
    this->YawOffsetAdjustmentSpeed = 60.00f;
    this->YawOffsetFadeInDistance = 1000.00f;
    this->MaxYawRotationSpeed = 720.00f;
    this->bAdjustPitch = true;
    this->bUsePitchTargetCurve = false;
}

