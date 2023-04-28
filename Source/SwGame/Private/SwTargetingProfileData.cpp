#include "SwTargetingProfileData.h"

FSwTargetingProfileData::FSwTargetingProfileData() {
    this->MaxDistance = 0.00f;
    this->MaxDistanceMultiplier = 0.00f;
    this->TraceMode = ESwTargetingTraceMode::None;
    this->bPrioritizeZTarget = false;
}

