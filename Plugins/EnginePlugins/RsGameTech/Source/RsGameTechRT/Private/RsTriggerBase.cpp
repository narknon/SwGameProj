#include "RsTriggerBase.h"

void ARsTriggerBase::OnComponentTriggerExited(URsBaseTriggerComponent* Component, AActor* Actor) {
}

void ARsTriggerBase::OnComponentTriggerEntered(URsBaseTriggerComponent* Component, AActor* Actor) {
}

bool ARsTriggerBase::IsInTrigger(const AActor* Actor) const {
    return false;
}

ARsTriggerBase::ARsTriggerBase() {
    // Null default object.
}

