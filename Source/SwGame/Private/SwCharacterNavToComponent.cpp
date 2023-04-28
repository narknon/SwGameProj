#include "SwCharacterNavToComponent.h"

bool USwCharacterNavToComponent::UpdateNavToTargetOrientation(const FRotator InTargetOrientation) {
    return false;
}

bool USwCharacterNavToComponent::UpdateNavToTargetLocation(const FVector InTargetLocation) {
    return false;
}

bool USwCharacterNavToComponent::UpdateNavToParams(const FSwCharacterNavToParams InParams) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToLocationWithParams(const FVector InTargetLocation, const FRotator InTargetOrientation, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToLocationByCurveWithParams(const FVector InTargetLocation, const FVector InOutgoingVelocity, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToLocationByCurve(const FVector InTargetLocation, const FVector InOutgoingVelocity, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToLocation(const FVector InTargetLocation, const FRotator InTargetOrientation, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToComponentWithParams(USceneComponent* InTargetComponent, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToComponent(USceneComponent* InTargetComponent, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToActorWithParams(AActor* InTargetActor, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility) {
    return false;
}

bool USwCharacterNavToComponent::TryNavToActor(AActor* InTargetActor, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility) {
    return false;
}

bool USwCharacterNavToComponent::TryDynamicNavToWithParams(const TScriptInterface<ISwCharacterDynamicNavToHandler>& InDynamicNavToHandler, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::TryDynamicNavTo(const TScriptInterface<ISwCharacterDynamicNavToHandler>& InDynamicNavToHandler, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::StartNavTo(const FVector InTargetLocation, const FRotator InTargetOrientation, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

bool USwCharacterNavToComponent::StartDynamicNavTo(const TScriptInterface<ISwCharacterDynamicNavToHandler>& InDynamicNavToHandler, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd) {
    return false;
}

void USwCharacterNavToComponent::OnNavToStart_Implementation() {
}

void USwCharacterNavToComponent::OnNavToEnd_Implementation(const bool bInSuccessful, const ESwCharacterNavToEndReason InReason) {
}

void USwCharacterNavToComponent::OnHeroStateModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier) {
}

void USwCharacterNavToComponent::OnCharacterInterrupted(ARsCharacter* Character) {
}

void USwCharacterNavToComponent::OnCharacterCombatStateChange(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState) {
}

bool USwCharacterNavToComponent::IsNavToInProgress() const {
    return false;
}

FRotator USwCharacterNavToComponent::GetNavToTargetOrientation() const {
    return FRotator{};
}

FVector USwCharacterNavToComponent::GetNavToTargetLocation() const {
    return FVector{};
}

FSwCharacterNavToParams USwCharacterNavToComponent::GetNavToParams() const {
    return FSwCharacterNavToParams{};
}

URsHeroStateModifierDefinition* USwCharacterNavToComponent::GetNavToHeroStateModifier() const {
    return NULL;
}

float USwCharacterNavToComponent::GetNavToElapsedTime() const {
    return 0.0f;
}

bool USwCharacterNavToComponent::CancelNavTo() {
    return false;
}

USwCharacterNavToComponent::USwCharacterNavToComponent() {
    // Null default object.
}

