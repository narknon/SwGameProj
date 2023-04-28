#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AbilityData.h"
#include "ESwAbilityUpgradeLevel.h"
#include "ESwDirectionFacing.h"
#include "OnAbilityActivatedDelegate.h"
#include "OnAbilityDebrisTriggeredDelegate.h"
#include "OnAbilityEffectAppliedDelegate.h"
#include "OnAbilityTriggeredDelegate.h"
#include "SwDistanceExtensionData.h"
#include "SwHybridTargetData.h"
#include "SwPitchAdjustmentData.h"
#include "Templates/SubclassOf.h"
#include "RsAbilityUserComponent.generated.h"

class AActor;
class UAnimationAsset;
class URsAbility;
class URsAbilityInstanceData;
class USwAttackState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAbilityUserComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> AbilityClassNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URsAbility>> AbilityClasses;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityEffectApplied OnAbilityEffectApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwDirectionFacing DirectionFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHybridTargetData HybridTargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeTargetingFidelity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrapolationTimeForActorsOnTopOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldApplyCameraPitchAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPitchAdjustmentData PitchAdjustmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwDistanceExtensionData DistanceExtensionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwHybridTargetData MountTargetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldApplyPitchAdjustmentToMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPitchAdjustmentData MountPitchAdjustmentData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityActivated OnAbilityActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityTriggered OnAbilityTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityDebrisTriggered OnAbilityDebrisTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FAbilityData> AbilityMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAbilityInstanceData* InstanceData[2];
    
public:
    URsAbilityUserComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerAbilityWithHighestAcquiredUpgrade(TSubclassOf<URsAbility> AbilityType, bool bIsHeld, bool bCanReTrigger);
    
    UFUNCTION(BlueprintCallable)
    void TriggerAbility(TSubclassOf<URsAbility> AbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel, bool bIsHeld, bool bCanReTrigger);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingLengthOverride(float InOverrideDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultOverrideAbilityTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetCanOnlyAffectCharacters(TSubclassOf<URsAbility> AbilityType, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityUpgradeLevel(TSubclassOf<URsAbility> AbilityType, TEnumAsByte<ESwAbilityUpgradeLevel::Type> UpgradeLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAbility(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityTriggered(TSubclassOf<URsAbility> AbilityType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentTargetForAbilityBP(TSubclassOf<URsAbility> InAbility, AActor*& OutTarget, float& OutPriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentAbilityTargetForBlueprint() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESwAbilityUpgradeLevel::Type> GetAbilityUpgradeLevel(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAbilityTargetsForBlueprint(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    FVector GetAbilityDirection(const TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    URsAbility* GetAbility(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllChildEffectsForAbility(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllAbilities();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateActiveAbility(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbilityOnTrigger(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbility(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    void ClearTargetingLengthOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOnlyAffectCharacters(TSubclassOf<URsAbility> AbilityType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddAbility(TSubclassOf<URsAbility> AbilityType);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAbility(TSubclassOf<URsAbility> AbilityType, UAnimationAsset* OverrideAnim, USwAttackState* InAttackState, bool bIsChaining, bool bShouldTriggerHighestUpgradeAfterActivate, bool bShouldIgnoreSequencerAndHeroState);
    
};

