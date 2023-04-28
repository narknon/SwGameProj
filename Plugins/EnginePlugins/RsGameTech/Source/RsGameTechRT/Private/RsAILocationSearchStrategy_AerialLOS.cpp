#include "RsAILocationSearchStrategy_AerialLOS.h"

FRsAILocationSearchStrategy_AerialLOS::FRsAILocationSearchStrategy_AerialLOS() {
    this->CastOrigin = ERsAILocationSearchStrategyRelativeToTargetOrSelf::RelativeToTarget;
    this->CastHeightOffset = 0.00f;
    this->bRequiresLOS = false;
    this->TargetAngleScoring_ScoreMultiplier = 0.00f;
    this->TargetAngleScoring_Angle = 0.00f;
}

