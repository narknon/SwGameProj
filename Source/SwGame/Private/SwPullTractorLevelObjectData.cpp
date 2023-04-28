#include "SwPullTractorLevelObjectData.h"

FSwPullTractorLevelObjectData::FSwPullTractorLevelObjectData() {
    this->bShouldSkipJiggle = false;
    this->JiggleScaleOverride = 0.00f;
    this->RsDominanceGroupOverrideWhenPulled = 0;
    this->AmbientRotation = ESwPullAmbientRotationType::None;
    this->bShouldHaveAutoBoundsOffsetForSingleTractor = false;
}

