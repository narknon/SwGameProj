#include "RsAbility.h"

USwAttackState* URsAbility::GetCombatState() const {
    return NULL;
}

URsAbility::URsAbility() {
    this->bManualShutdownControl = false;
    this->DefaultAbilityState = NULL;
    this->HeroStateModifier = NULL;
    this->TimeToAllowReactivation = 0.00f;
    this->AbilityType = NULL;
}

