#include "R4CameraBehavior_SpeederBikeSplineBlend.h"

UR4CameraBehavior_SpeederBikeSplineBlend::UR4CameraBehavior_SpeederBikeSplineBlend() {
    this->RotationBlendPercentage = 0.25f;
    this->LookAheadDistance = 500.00f;
    this->bBlendOnlyYaw = true;
}

