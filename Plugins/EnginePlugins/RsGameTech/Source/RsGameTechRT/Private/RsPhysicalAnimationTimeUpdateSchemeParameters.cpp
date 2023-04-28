#include "RsPhysicalAnimationTimeUpdateSchemeParameters.h"

FRsPhysicalAnimationTimeUpdateSchemeParameters::FRsPhysicalAnimationTimeUpdateSchemeParameters() {
    this->UseFixedFrameTime = false;
    this->UsePrediction = false;
    this->OverrideFixedFrameTimeValue = 0.00f;
}

