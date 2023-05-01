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
    this->NoExtCancelModifier = NULL;
    this->TargetBoneName = TEXT("head");
    this->LedgeBelow_Handler = NULL;
    this->ClimbAbove_Handler = NULL;
    this->FallAbove_Handler = NULL;
    this->EdgeAbove_Handler = NULL;
    this->MountAbove_Handler = NULL;
    this->Backstab_Handler = NULL;
    this->MaxValidEdgeDistance = 150.00f;
    this->SwHero = NULL;
    this->bHasTarget = false;
    this->bHasClosestEdge = false;
    this->ClosestEdgeDistance = 340282346638528859811704183484516925440.00f;
    this->bDFXStarted = false;
    this->bIsTargetLocked = false;
    this->bDFXFinishedWithAttack = false;
    this->bDFXFinishedWithSyncAttack = false;
    this->CurrentDFXState = ESwDFXState::Idle;
    this->DFXType = ESwDFXType::Count;
    this->bAttackStarted = false;
}

