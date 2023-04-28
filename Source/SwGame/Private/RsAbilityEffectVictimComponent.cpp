#include "RsAbilityEffectVictimComponent.h"
#include "Templates/SubclassOf.h"

bool URsAbilityEffectVictimComponent::ShouldConsiderAdditionalTargets(TSubclassOf<URsAbilityEffect> EffectType) const {
    return false;
}

void URsAbilityEffectVictimComponent::SetVictimType(ERsVictimDataType InVictimType) {
}

void URsAbilityEffectVictimComponent::SetVictimDataUpgrades(TSubclassOf<USwAbilityVictimData> Level1, TSubclassOf<USwAbilityVictimData> Level2, TSubclassOf<USwAbilityVictimData> Level3) {
}

void URsAbilityEffectVictimComponent::SetVictimData(URsAbilityEffectVictimData* InVictimData) {
}

void URsAbilityEffectVictimComponent::SetPriorityPreset(TEnumAsByte<EAbilityPriorities::Type> InPriority) {
}

void URsAbilityEffectVictimComponent::SetLiftSlamType(ESwLiftSlamType InNewType) {
}

bool URsAbilityEffectVictimComponent::SetLiftSlamState(ESwLiftSlamState NewState) {
    return false;
}

void URsAbilityEffectVictimComponent::SetForceTargetHighlightType(ESwForceTargetHighlightType InNewType) {
}

void URsAbilityEffectVictimComponent::SetBoxExtent(FVector InBoxExtent) {
}

void URsAbilityEffectVictimComponent::SetAbilityPriorityPreset(FName Preset) {
}

void URsAbilityEffectVictimComponent::RemoveOverrideForEffect(TSubclassOf<URsAbilityEffect> EffectType) {
}

void URsAbilityEffectVictimComponent::RemoveAdditionalTarget(AActor* AdditionalTarget) {
}

void URsAbilityEffectVictimComponent::PopulatePresetNameList(UObject* ContextObject, TArray<FName>& Options) {
}

bool URsAbilityEffectVictimComponent::K2_HasOverridenEffect(TSubclassOf<URsAbilityEffect> EffectType) const {
    return false;
}

bool URsAbilityEffectVictimComponent::IsLiftSlamStateLocked() const {
    return false;
}

TEnumAsByte<EAbilityPriorities::Type> URsAbilityEffectVictimComponent::GetPriorityPreset() const {
    return EAbilityPriorities::Ignore;
}

ESwLiftSlamType URsAbilityEffectVictimComponent::GetLiftSlamType() const {
    return ESwLiftSlamType::Default;
}

ESwLiftSlamState URsAbilityEffectVictimComponent::GetLiftSlamState() const {
    return ESwLiftSlamState::None;
}

FName URsAbilityEffectVictimComponent::GetAbilityPriorityPreset() const {
    return NAME_None;
}

bool URsAbilityEffectVictimComponent::CanUseStandardHighlight(const ARsHero* RawHero) const {
    return false;
}

bool URsAbilityEffectVictimComponent::CanBeTargetWithoutVisibilty() const {
    return false;
}

void URsAbilityEffectVictimComponent::AddOverrideForEffect(TSubclassOf<URsAbilityEffect> EffectType, bool bShouldOverrideChildren) {
}

void URsAbilityEffectVictimComponent::AddAdditionalTarget(AActor* AdditionalTarget) {
}

URsAbilityEffectVictimComponent::URsAbilityEffectVictimComponent() {
    // Null default object.
}

