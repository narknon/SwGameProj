#include "SwDeathFromXComponent.h"

void USwDeathFromXComponent::StartDFX() {
}

ESwDFXState USwDeathFromXComponent::StartAttack() {
    return ESwDFXState::Idle;
}




void USwDeathFromXComponent::OnHeroStateModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier) {
}

void USwDeathFromXComponent::OnFinishDFXBP() {
}


void USwDeathFromXComponent::OnDFXSyncAttackStartedBP() {
}

void USwDeathFromXComponent::OnDFXGenericAttackStartedBP() {
}

void USwDeathFromXComponent::LockTarget(bool bInIsTargetLocked) {
}

bool USwDeathFromXComponent::IsTargetValid_Implementation(USceneComponent* InSceneComponent) {
    return false;
}

bool USwDeathFromXComponent::IsDFXStarted() const {
    return false;
}


USceneComponent* USwDeathFromXComponent::GetTargetCommonOverride_Implementation() {
    return NULL;
}

void USwDeathFromXComponent::FinishDFX() {
}


bool USwDeathFromXComponent::CanDoAction(FName ActionName) const {
    return false;
}

USwDeathFromXComponent::USwDeathFromXComponent() {
    // Null default object.
}

