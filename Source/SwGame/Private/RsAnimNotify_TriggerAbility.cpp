#include "RsAnimNotify_TriggerAbility.h"

URsAnimNotify_TriggerAbility::URsAnimNotify_TriggerAbility() {
    this->AbilityType = NULL;
    this->bShouldUseHighestAcquiredUpgrade = false;
    this->bCanReTrigger = true;
    this->UpgradeLevel = ESwAbilityUpgradeLevel::Level_1;
}

