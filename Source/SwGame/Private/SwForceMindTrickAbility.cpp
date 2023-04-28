#include "SwForceMindTrickAbility.h"

void USwForceMindTrickAbility::StopMindTrick() {
}



void USwForceMindTrickAbility::OnHoldRelease() {
}



bool USwForceMindTrickAbility::IsTargetValidBP_Implementation(const AActor* InTarget) const {
    return false;
}

bool USwForceMindTrickAbility::IsMindTrickTriggerDelayed() const {
    return false;
}

bool USwForceMindTrickAbility::IsMindTrickInProgress() const {
    return false;
}

bool USwForceMindTrickAbility::CanDoMindTrick() const {
    return false;
}

USwForceMindTrickAbility::USwForceMindTrickAbility() {
    // Null default object.
}

