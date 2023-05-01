#include "SwForceSlowAbility.h"

FSwForceSlowUpgradeData USwForceSlowAbility::GetSlowUpgradeData(TEnumAsByte<ESwAbilityUpgradeLevel::Type> InUpgradeLevel) {
    return FSwForceSlowUpgradeData{};
}

USwForceSlowAbility::USwForceSlowAbility() {
    this->EnterAnimation = NULL;
    this->FailureAnimation = NULL;
    this->MotionTweakName = TEXT("ForceSlow");
    this->AudioTriggerStart = NULL;
    this->AudioTriggerEnd = NULL;
    this->AudioFail = NULL;
    this->MaxGroupsSlowed = 1;
}

