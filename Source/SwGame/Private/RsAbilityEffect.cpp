#include "RsAbilityEffect.h"

void URsAbilityEffect::BlueprintDeactivate() {
}

URsAbilityEffect::URsAbilityEffect() {
    this->EffectType = NULL;
    this->AbilityType = NULL;
    this->bIsRenewable = false;
    this->bCanIgnoreSyncs = false;
}

