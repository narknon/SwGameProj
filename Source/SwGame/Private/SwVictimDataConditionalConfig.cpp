#include "SwVictimDataConditionalConfig.h"

FSwVictimDataConditionalConfig::FSwVictimDataConditionalConfig() {
    this->EvaluationType = ESwConditionalEvaluationType::Default;
    this->AirConditional = ESwAirConditionalType::None;
    this->DarkModeConditional = ESwDarkModeConditionalType::None;
    this->SlowConditional = ESwSlowConditionalType::None;
    this->PullConditional = ESwPullConditionalType::None;
}

