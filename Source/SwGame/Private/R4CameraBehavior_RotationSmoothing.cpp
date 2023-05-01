#include "R4CameraBehavior_RotationSmoothing.h"

FRotator UR4CameraBehavior_RotationSmoothing::GetTargetRotation(const FRsCameraOutputs& Outputs) const {
    return FRotator{};
}

UR4CameraBehavior_RotationSmoothing::UR4CameraBehavior_RotationSmoothing() {
    this->TrackingPercentage = 0.70f;
    this->TrackingTime = 0.25f;
    this->bSmoothRotationOffsets = false;
    this->bFoldDeltaIntoRotationOnEnd = true;
}

