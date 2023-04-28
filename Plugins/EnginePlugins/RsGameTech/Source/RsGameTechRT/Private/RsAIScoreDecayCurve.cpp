#include "RsAIScoreDecayCurve.h"

FRsAIScoreDecayCurve::FRsAIScoreDecayCurve() {
    this->UpperBound = 0.00f;
    this->LowerBound = 0.00f;
    this->DecayTime = 0.00f;
    this->CurveType = ERsAICurveType::Linear;
}

