#include "RsAILocationSearchStrategy_Jump.h"

FRsAILocationSearchStrategy_Jump::FRsAILocationSearchStrategy_Jump() {
    this->CastOrigin = ERsAILocationSearchStrategyRelativeToTargetOrSelf::RelativeToTarget;
    this->CastHeightOffset = 0.00f;
    this->PathGroundClearance = 0.00f;
    this->CastArcBonusHeight = 0.00f;
    this->PathCurveFullness = 0.00f;
    this->PathCurveRoll = 0.00f;
    this->bRequiresLOS_SelfToPoint = false;
    this->bRequiresLOS_TargetToPoint = false;
    this->SearchGridSize = 0.00f;
    this->TargetAngleScoring_ScoreMultiplier = 0.00f;
    this->TargetAngleScoring_Angle = 0.00f;
}

