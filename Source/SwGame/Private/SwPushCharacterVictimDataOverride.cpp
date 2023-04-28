#include "SwPushCharacterVictimDataOverride.h"

FSwPushCharacterVictimDataOverride::FSwPushCharacterVictimDataOverride() {
    this->ForcePushDistance = 0.00f;
    this->ForcePushTimeToDestination = 0.00f;
    this->ShouldForcePushStagger = ESwOverrideBooleanType::DontOverride;
    this->ShouldGlancingHitsBeDirectHits = ESwOverrideBooleanType::DontOverride;
    this->bShouldOverrideStaggerData = false;
}

