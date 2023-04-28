#include "SwPullTractorCommonData.h"

FSwPullTractorCommonData::FSwPullTractorCommonData() {
    this->PullMaxDurationOverride = 0.00f;
    this->PullBaseSpeedOverride = 0.00f;
    this->bShouldMoveDuringTractor = false;
    this->DistanceToStartCatch = 0.00f;
    this->bShouldUsePreciseConstraint = false;
    this->bShouldUseManualConstraint = false;
}

