#include "SwAbilitySystemLibrary.h"
#include "Templates/SubclassOf.h"

void USwAbilitySystemLibrary::TriggerAbilityWithHighestAcquiredUpgrade(const AActor* Target, TSubclassOf<URsAbility> AbilityType, bool bIsHeld, bool bCanBeReTriggered) {
}

void USwAbilitySystemLibrary::TriggerAbility(const AActor* Target, TSubclassOf<URsAbility> AbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel, bool bIsHeld, bool bCanBeReTriggered) {
}

ESwLiftSlamState USwAbilitySystemLibrary::SlamEnd(AActor* InTarget) {
    return ESwLiftSlamState::None;
}

void USwAbilitySystemLibrary::SetZTargetForAbilities(AActor* WorldContextObject, AActor* ZTargetActor) {
}

ESwLiftSlamState USwAbilitySystemLibrary::LiftEnd(AActor* InTarget) {
    return ESwLiftSlamState::None;
}

bool USwAbilitySystemLibrary::IsInvalidAbilityTargetBlueprint(UObject* Blueprint) {
    return false;
}

bool USwAbilitySystemLibrary::IsEffectActiveOnVictim(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target) {
    return false;
}

bool USwAbilitySystemLibrary::IsAbleToSlam(const AActor* Target) {
    return false;
}

bool USwAbilitySystemLibrary::IsAbleToLift(const AActor* Target) {
    return false;
}

bool USwAbilitySystemLibrary::IsAbilityTriggered(const AActor* Actor, TSubclassOf<URsAbility> AbilityType) {
    return false;
}

ESwLiftSlamType USwAbilitySystemLibrary::GetLiftSlamType(const AActor* Target) {
    return ESwLiftSlamType::Default;
}

ESwLiftSlamActionType USwAbilitySystemLibrary::GetLiftSlamPotentialAction(const AActor* Target) {
    return ESwLiftSlamActionType::None;
}

URsAbilityEffect* USwAbilitySystemLibrary::GetFirstEffectOnTarget(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target) {
    return NULL;
}

int32 USwAbilitySystemLibrary::GetEffectCountActiveOnVictim(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target) {
    return 0;
}

TEnumAsByte<ESwAbilityUpgradeLevel::Type> USwAbilitySystemLibrary::GetAbilityUpgradeLevel(const AActor* Target, TSubclassOf<URsAbility> AbilityType) {
    return ESwAbilityUpgradeLevel::Level_1;
}

int32 USwAbilitySystemLibrary::DeactivateEffectFromVictim(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target) {
    return 0;
}

int32 USwAbilitySystemLibrary::DeactivateAllEffectsInWorld(const AActor* WorldContextObject) {
    return 0;
}

void USwAbilitySystemLibrary::DeactivateAbilityFromTarget(TSubclassOf<URsAbility> AbilityType, AActor* Target) {
}

void USwAbilitySystemLibrary::ApplyForceSlowEffectOnVictim(TSubclassOf<USwForceSlowAbilityEffect> EffectType, AActor* Victim, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, const float OverridenDuration, AActor* Instigator) {
}

void USwAbilitySystemLibrary::ApplyForcePushEffectOnVictim(TSubclassOf<USwForcePushAbilityEffect> EffectType, AActor* Victim, FVector DirectionVector, const float Strength, const float DurationMultiplier, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, AActor* Instigator) {
}

USwForcePullStandaloneAbilityEffect* USwAbilitySystemLibrary::ApplyForcePullEffectOnVictim(TSubclassOf<USwForcePullStandaloneAbilityEffect> EffectType, AActor* Victim, TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, FVector DestinationPosition, bool bIsPullYank, float Duration, FVector DestinationForwardVector, AActor* Instigator) {
    return NULL;
}

USwForceLiftAbilityEffect* USwAbilitySystemLibrary::ApplyForceLiftOnVictim(TSubclassOf<USwForceLiftAbilityEffect> EffectType, AActor* Victim, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, AActor* Instigator) {
    return NULL;
}

USwAbilitySystemLibrary::USwAbilitySystemLibrary() {
}

