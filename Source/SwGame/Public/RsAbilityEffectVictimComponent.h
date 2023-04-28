#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "EAbilityPriorities.h"
#include "ERsAbilityWeightClass.h"
#include "ERsVictimDataType.h"
#include "ESwForceTargetHighlightType.h"
#include "ESwLiftSlamState.h"
#include "ESwLiftSlamType.h"
#include "ESwRaycastVisibilityMode.h"
#include "RsAbilityEffectOverrideData.h"
#include "RsAbilityPriorityDataRow.h"
#include "SwAbilityEffectOverridenLiftData.h"
#include "SwAbilityEffectOverridenSlamData.h"
#include "SwForceTargetHighlightOverrideParameters.h"
#include "SwLiftSlamAnalogLevelObjectVictimData.h"
#include "SwRaycastVisibilityData.h"
#include "Templates/SubclassOf.h"
#include "RsAbilityEffectVictimComponent.generated.h"

class AActor;
class ARsHero;
class UObject;
class URsAbilityEffect;
class URsAbilityEffectVictimData;
class USwAbilityVictimData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAbilityEffectVictimComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAbilityPriorityDataRow AbilityPriorityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAbilityPriorities::Type> Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsVictimDataType VictimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAbilityEffectVictimData* VictimData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAbilityVictimData> VictimDataUpgrades[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAbilityWeightClass::Type> OverrideWeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URsAbilityEffect>> EffectOverrideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAbilityEffectOverrideData> EffectOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideIfNotVulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAbilityEffectOverridenLiftData LiftOverridenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAbilityEffectOverridenSlamData SlamOverridenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeTargetWithoutVisibilty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterChildAsAdditionalTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterParentAsAdditionalTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URsAbilityEffect>> CanConsiderAdditionalTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysOverrideResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeConsideredForDirectionAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bCanBeATarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeForceHighlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIntenseHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntenseHighlightBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldModifyForceTargetHighlightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceTargetHighlightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHighlightChildActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRequiresForceSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRequiresForcePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRequiresForcePull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRequiresForceTK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRequiresForceLiftSlam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESwForceTargetHighlightType HighlightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwForceTargetHighlightType OriginalHighlightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldModifyForceTargetHighlightParameters;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSwForceTargetHighlightOverrideParameters ForceTargetHighlightParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldForceMeterCostBeFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnEnvironmentObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwLiftSlamType LiftSlamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwLiftSlamState LiftSlamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLiftSlamStateLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnalogLiftSlam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalogLiftSlamExtensionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftSlamAnalogLevelObjectVictimData AnalogLiftSlamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLiftSlamTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOverrideZTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAudioPingable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwRaycastVisibilityMode RaycastVisibilityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwRaycastVisibilityData RaycastVisibilityData;
    
    URsAbilityEffectVictimComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConsiderAdditionalTargets(TSubclassOf<URsAbilityEffect> EffectType) const;
    
    UFUNCTION(BlueprintCallable)
    void SetVictimType(ERsVictimDataType InVictimType);
    
    UFUNCTION(BlueprintCallable)
    void SetVictimDataUpgrades(TSubclassOf<USwAbilityVictimData> Level1, TSubclassOf<USwAbilityVictimData> Level2, TSubclassOf<USwAbilityVictimData> Level3);
    
    UFUNCTION(BlueprintCallable)
    void SetVictimData(URsAbilityEffectVictimData* InVictimData);
    
    UFUNCTION(BlueprintCallable)
    void SetPriorityPreset(TEnumAsByte<EAbilityPriorities::Type> InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetLiftSlamType(ESwLiftSlamType InNewType);
    
    UFUNCTION(BlueprintCallable)
    bool SetLiftSlamState(ESwLiftSlamState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetForceTargetHighlightType(ESwForceTargetHighlightType InNewType);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityPriorityPreset(FName Preset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOverrideForEffect(TSubclassOf<URsAbilityEffect> EffectType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAdditionalTarget(AActor* AdditionalTarget);
    
    UFUNCTION(BlueprintCallable)
    static void PopulatePresetNameList(UObject* ContextObject, TArray<FName>& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_HasOverridenEffect(TSubclassOf<URsAbilityEffect> EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLiftSlamStateLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAbilityPriorities::Type> GetPriorityPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwLiftSlamType GetLiftSlamType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwLiftSlamState GetLiftSlamState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAbilityPriorityPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseStandardHighlight(const ARsHero* RawHero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeTargetWithoutVisibilty() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOverrideForEffect(TSubclassOf<URsAbilityEffect> EffectType, bool bShouldOverrideChildren);
    
    UFUNCTION(BlueprintCallable)
    void AddAdditionalTarget(AActor* AdditionalTarget);
    
};

