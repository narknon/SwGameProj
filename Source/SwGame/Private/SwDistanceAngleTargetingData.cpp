#include "SwDistanceAngleTargetingData.h"

FSwDistanceAngleTargetingData::FSwDistanceAngleTargetingData() {
    this->MaxHorizontalHalfAngle = 0.00f;
    this->MaxVerticalHalfAngle = 0.00f;
    this->ProximityWeight = 0.00f;
    this->TargetingMode = ESwDistanceAngleTargetingMode::None;
    this->bOverrideVerticalHalfAngleWithCameraFOV = false;
    this->bEnableVerticalAngleTest = false;
}

