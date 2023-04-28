#include "SwPullGameplayVictimData.h"

FSwPullGameplayVictimData::FSwPullGameplayVictimData() {
    this->PullType = ESwPullVictimType::YankOnly;
    this->bShouldOverrideWithAirPullType = false;
    this->AirPullType = ESwPullVictimType::YankOnly;
    this->bShouldOverrideWithDarkModePullType = false;
    this->DarkModePullType = ESwPullVictimType::YankOnly;
}

