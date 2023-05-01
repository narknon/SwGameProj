#include "RsAbilityUserComponent.h"
#include "Templates/SubclassOf.h"

void URsAbilityUserComponent::TriggerAbilityWithHighestAcquiredUpgrade(TSubclassOf<URsAbility> AbilityType, bool bIsHeld, bool bCanReTrigger) {
}

void URsAbilityUserComponent::TriggerAbility(TSubclassOf<URsAbility> AbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel, bool bIsHeld, bool bCanReTrigger) {
}

void URsAbilityUserComponent::SetTargetingLengthOverride(float InOverrideDistance) {
}

void URsAbilityUserComponent::SetDefaultOverrideAbilityTarget(AActor* InTarget) {
}

void URsAbilityUserComponent::SetCanOnlyAffectCharacters(TSubclassOf<URsAbility> AbilityType, bool Value) {
}

void URsAbilityUserComponent::SetAbilityUpgradeLevel(TSubclassOf<URsAbility> AbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel) {
}

void URsAbilityUserComponent::RemoveAbility(TSubclassOf<URsAbility> AbilityType) {
}

bool URsAbilityUserComponent::IsAbilityTriggered(TSubclassOf<URsAbility> AbilityType) const {
    return false;
}

bool URsAbilityUserComponent::IsAbilityActive() const {
    return false;
}

void URsAbilityUserComponent::GetCurrentTargetForAbilityBP(TSubclassOf<URsAbility> InAbility, AActor*& OutTarget, float& OutPriority) const {
}

AActor* URsAbilityUserComponent::GetCurrentAbilityTargetForBlueprint() const {
    return NULL;
}

TEnumAsByte<ESwAbilityUpgradeLevel::Type> URsAbilityUserComponent::GetAbilityUpgradeLevel(TSubclassOf<URsAbility> AbilityType) {
    return ESwAbilityUpgradeLevel::Level_1;
}

TArray<AActor*> URsAbilityUserComponent::GetAbilityTargetsForBlueprint(TSubclassOf<URsAbility> AbilityType) {
    return TArray<AActor*>();
}

FVector URsAbilityUserComponent::GetAbilityDirection(const TSubclassOf<URsAbility> AbilityType) {
    return FVector{};
}

URsAbility* URsAbilityUserComponent::GetAbility(TSubclassOf<URsAbility> AbilityType) {
    return NULL;
}

void URsAbilityUserComponent::DeactivateAllChildEffectsForAbility(TSubclassOf<URsAbility> AbilityType) {
}

void URsAbilityUserComponent::DeactivateAllAbilities() {
}

void URsAbilityUserComponent::DeactivateActiveAbility(TSubclassOf<URsAbility> AbilityType) {
}

void URsAbilityUserComponent::DeactivateAbilityOnTrigger(TSubclassOf<URsAbility> AbilityType) {
}

void URsAbilityUserComponent::DeactivateAbility(TSubclassOf<URsAbility> AbilityType) {
}

void URsAbilityUserComponent::ClearTargetingLengthOverride() {
}

bool URsAbilityUserComponent::CanOnlyAffectCharacters(TSubclassOf<URsAbility> AbilityType) const {
    return false;
}

void URsAbilityUserComponent::AddAbility(TSubclassOf<URsAbility> AbilityType) {
}

void URsAbilityUserComponent::ActivateAbility(TSubclassOf<URsAbility> AbilityType, UAnimationAsset* OverrideAnim, USwAttackState* InAttackState, bool bIsChaining, bool bShouldTriggerHighestUpgradeAfterActivate, bool bShouldIgnoreSequencerAndHeroState) {
}

URsAbilityUserComponent::URsAbilityUserComponent() {
    this->DirectionFacing = ESwDirectionFacing::AITargetFacing;
    this->RopeTargetingFidelity = 5;
    this->ExtrapolationTimeForActorsOnTopOf = -1.00f;
    this->bShouldApplyCameraPitchAdjustment = false;
    this->bShouldApplyPitchAdjustmentToMount = false;
    this->InstanceData[0] = NULL;
    this->InstanceData[1] = NULL;
}

