#include "SwSlowGameplayVictimData.h"

FSwSlowGameplayVictimData::FSwSlowGameplayVictimData() {
    this->ForceSlowStaggerAnimation = NULL;
    this->ForceSlowDuration = 0.00f;
    this->ForceSlowTimeDilation = 0.00f;
    this->ForceSlowBoostedTimeDilation = 0.00f;
    this->bCanForceSlowOnTopOf = false;
    this->ForceSlowCharacterTimeDilationCurve = NULL;
    this->bCanForceSlowRotateToTarget = false;
}

