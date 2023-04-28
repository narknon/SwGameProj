#include "RsTargetableComponent.h"

void URsTargetableComponent::SetFactionTag(FGameplayTag NewFactionTag) {
}

void URsTargetableComponent::ResetFactionTagToDefault() {
}

FGameplayTag URsTargetableComponent::GetFactionTag() const {
    return FGameplayTag{};
}

FGameplayTag URsTargetableComponent::GetDefaultFactionTag() const {
    return FGameplayTag{};
}

void URsTargetableComponent::GetAllTargetableActors(const UObject* WorldContextObject, TArray<AActor*>& OutActors) {
}

void URsTargetableComponent::GetAllHostileTargetableActors(const UObject* WorldContextObject, FGameplayTag FactionTag, TArray<AActor*>& OutActors) {
}

URsTargetableComponent::URsTargetableComponent() {
    // Null default object.
}

