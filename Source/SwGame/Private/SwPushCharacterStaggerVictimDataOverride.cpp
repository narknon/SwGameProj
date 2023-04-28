#include "SwPushCharacterStaggerVictimDataOverride.h"

FSwPushCharacterStaggerVictimDataOverride::FSwPushCharacterStaggerVictimDataOverride() {
    this->ShouldForcePushStaggerPutInCombatState = ESwOverrideBooleanType::DontOverride;
    this->ShouldForcePushHaveBackStagger = ESwOverrideBooleanType::DontOverride;
    this->bShouldOverrideStaggerAnim = false;
    this->bShouldOverrideBackStaggerAnim = false;
}

