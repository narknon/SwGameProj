#include "R4CameraBehavior_LookInFallDirection.h"

UR4CameraBehavior_LookInFallDirection::UR4CameraBehavior_LookInFallDirection() {
    this->PlayerInputDelay = 0.25f;
    this->LookAheadTime = 0.50f;
    this->RampInDistance = 100.00f;
    this->RampOutDistance = 400.00f;
    this->LandingLocationFramePercent = 0.30f;
    this->MaxPitchAngle = 75.00f;
    this->PitchSmoothingPercentage = 0.80f;
    this->PitchSmoothingTime = 0.20f;
    this->PullBackBegin = 0.70f;
    this->MaxPullBackDistance = 225.00f;
    this->PullBackSmoothingPercentage = 0.70f;
    this->PullBackSmoothingTime = 0.20f;
}

