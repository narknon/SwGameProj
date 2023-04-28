#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESwAbilityUpgradeLevel.h"
#include "ESwLiftSlamActionType.h"
#include "ESwLiftSlamState.h"
#include "ESwLiftSlamType.h"
#include "Templates/SubclassOf.h"
#include "SwAbilitySystemLibrary.generated.h"

class AActor;
class UObject;
class URsAbility;
class URsAbilityEffect;
class USwForceLiftAbilityEffect;
class USwForcePullStandaloneAbilityEffect;
class USwForcePushAbilityEffect;
class USwForceSlowAbilityEffect;

UCLASS(Blueprintable)
class SWGAME_API USwAbilitySystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwAbilitySystemLibrary();
    UFUNCTION(BlueprintCallable)
    static void TriggerAbilityWithHighestAcquiredUpgrade(const AActor* Target, TSubclassOf<URsAbility> AbilityType, bool bIsHeld, bool bCanBeReTriggered);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerAbility(const AActor* Target, TSubclassOf<URsAbility> AbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel, bool bIsHeld, bool bCanBeReTriggered);
    
    UFUNCTION(BlueprintCallable)
    static ESwLiftSlamState SlamEnd(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetZTargetForAbilities(AActor* WorldContextObject, AActor* ZTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static ESwLiftSlamState LiftEnd(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInvalidAbilityTargetBlueprint(UObject* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEffectActiveOnVictim(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbleToSlam(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbleToLift(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbilityTriggered(const AActor* Actor, TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESwLiftSlamType GetLiftSlamType(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESwLiftSlamActionType GetLiftSlamPotentialAction(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static URsAbilityEffect* GetFirstEffectOnTarget(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEffectCountActiveOnVictim(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ESwAbilityUpgradeLevel::Type> GetAbilityUpgradeLevel(const AActor* Target, TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    static int32 DeactivateEffectFromVictim(TSubclassOf<URsAbilityEffect> EffectType, AActor* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 DeactivateAllEffectsInWorld(const AActor* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateAbilityFromTarget(TSubclassOf<URsAbility> AbilityType, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForceSlowEffectOnVictim(TSubclassOf<USwForceSlowAbilityEffect> EffectType, AActor* Victim, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, const float OverridenDuration, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyForcePushEffectOnVictim(TSubclassOf<USwForcePushAbilityEffect> EffectType, AActor* Victim, FVector DirectionVector, const float Strength, const float DurationMultiplier, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static USwForcePullStandaloneAbilityEffect* ApplyForcePullEffectOnVictim(TSubclassOf<USwForcePullStandaloneAbilityEffect> EffectType, AActor* Victim, TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, FVector DestinationPosition, bool bIsPullYank, float Duration, FVector DestinationForwardVector, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static USwForceLiftAbilityEffect* ApplyForceLiftOnVictim(TSubclassOf<USwForceLiftAbilityEffect> EffectType, AActor* Victim, const TEnumAsByte<ESwAbilityUpgradeLevel::Type> Level, AActor* Instigator);
    
};

