#include "SwBTTask_ActivateForceAbility.h"

USwBTTask_ActivateForceAbility::USwBTTask_ActivateForceAbility() {
    this->AbilityTypeToActivate = NULL;
    this->UpgradeLevel = ESwAbilityUpgradeLevel::Level_1;
    this->OverrideAnimation = NULL;
    this->bMaintainCharacterMotion = false;
}

