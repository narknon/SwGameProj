#include "RsBaseTriggerComponent.h"

void URsBaseTriggerComponent::SetTriggerEnabled(bool bEnabled) {
}

bool URsBaseTriggerComponent::IsInTrigger(const AActor* Actor) const {
    return false;
}

void URsBaseTriggerComponent::GetActorsInTrigger(TArray<AActor*>& OutActorsInTrigger) const {
}

URsBaseTriggerComponent::URsBaseTriggerComponent() {
    // Null default object.
}

