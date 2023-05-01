#include "R4CameraBehavior_MotionSmoothing.h"

UR4CameraBehavior_MotionSmoothing::UR4CameraBehavior_MotionSmoothing() {
    this->TrackingPercentage = 0.50f;
    this->TrackingTime = 1.00f;
    this->SmoothingTarget = CMST_Anchor;
    this->bSmoothInCameraSpace = false;
    this->bSmoothByDistanceInsteadOfTime = false;
    this->bScaleWithTransitions = true;
    this->SmoothByDistanceUnitsPerSecondEquivalent = 100.00f;
    this->bSmoothZOnly = false;
    this->MaxDeltaZ = 100.00f;
}

