#include "SwBeastTameComponent.h"




void USwBeastTameComponent::OwnerInstigatedZeroDamage(const FRsDamageParams& DamageInfo, AActor* OtherActor, AActor* WouldBeDamageCauser) {
}

void USwBeastTameComponent::OwnerInstigatedAnyDamage(float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser) {
}

void USwBeastTameComponent::OverrideTameTimeout(bool bEnableOverride, float InOverride) {
}


void USwBeastTameComponent::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void USwBeastTameComponent::OnHeroZTargeted(AActor* InActor) {
}

void USwBeastTameComponent::OnHeroUnsheathingDone() {
}

void USwBeastTameComponent::OnHeroSheathingDone() {
}

void USwBeastTameComponent::OnHeroInstantSheathe(bool bInUnsheathed) {
}

void USwBeastTameComponent::OnHeroExitedZTarget() {
}

void USwBeastTameComponent::OnHeroEvaded() {
}

void USwBeastTameComponent::OnHeroCombatStateChanged(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState) {
}

void USwBeastTameComponent::OnHealthChanged(float PrevHealth, float Health) {
}

void USwBeastTameComponent::OnDeath(AActor* DeadActor) {
}

void USwBeastTameComponent::OnAwarnessLevelChanged(ARsAIController* InAIController, AActor* InActor, TEnumAsByte<ERsAIAwarenessLevel::Type> InPreviousAwarenessLevel, TEnumAsByte<ERsAIAwarenessLevel::Type> InNewAwarenessLevel) {
}

void USwBeastTameComponent::OnArivedHome() {
}

void USwBeastTameComponent::OnAIWakeStateChange(ARsAIController* InAIController, const bool bAwake) {
}

void USwBeastTameComponent::OnAIAttackTargetChangedEvent(ARsAIController* InAIController) {
}

bool USwBeastTameComponent::IsTamingInProgress() const {
    return false;
}

bool USwBeastTameComponent::IsTamedAndNonTargetable() {
    return false;
}

bool USwBeastTameComponent::IsTamed() const {
    return false;
}

bool USwBeastTameComponent::IsTamableBP_Implementation() const {
    return false;
}




float USwBeastTameComponent::GetTameProgressRate() const {
    return 0.0f;
}

void USwBeastTameComponent::ForceTriggerTameRegress(bool bInTameRegressEnabled, bool bInResetOnEnable) {
}

void USwBeastTameComponent::ForceTamed() {
}

void USwBeastTameComponent::ForceSendHome() {
}

void USwBeastTameComponent::ForceReleaseTame(bool bInAllowReTame) {
}



bool USwBeastTameComponent::CanStartTameRegressBP_Implementation() {
    return false;
}

USwBeastTameComponent::USwBeastTameComponent() {
    // Null default object.
}

