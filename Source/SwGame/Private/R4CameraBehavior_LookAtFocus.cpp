#include "R4CameraBehavior_LookAtFocus.h"

UR4CameraBehavior_LookAtFocus::UR4CameraBehavior_LookAtFocus() {
    this->LookAtPercentage = 1.00f;
    this->bUseLookAtPercentageCurve = false;
    this->LookAtPercentageDistanceScale = 1000.00f;
    this->bAdjustBaseRotationPitch = true;
}

