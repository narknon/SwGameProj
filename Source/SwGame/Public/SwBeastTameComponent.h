#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ERsAIAwarenessLevel.h"
#include "ERsCombatState.h"
#include "ERsHeroLoadoutFlags.h"
#include "RsDamageParams.h"
#include "SwBeastTame_OnNonTamableAttemptDelegate.h"
#include "SwBeastTame_OnProgressBoostDelegate.h"
#include "SwBeastTame_OnProgressLostDelegate.h"
#include "SwBeastTame_OnStopTamingDelegate.h"
#include "SwBeastTame_OnTameAttemptDelegate.h"
#include "SwBeastTame_OnTameDecayStartedDelegate.h"
#include "SwBeastTame_OnTameFullyRegressedDelegate.h"
#include "SwBeastTame_OnTameMeterAdjustedDelegate.h"
#include "SwBeastTame_OnTameRegressStartedDelegate.h"
#include "SwBeastTame_OnTameRegressStoppedDelegate.h"
#include "SwBeastTame_OnTameRegressUpdateDelegate.h"
#include "SwBeastTame_OnTameReturnHomeResetDelegate.h"
#include "SwBeastTame_OnTameSucceedDelegate.h"
#include "SwBeastTame_OnUntamableAttemptDelegate.h"
#include "SwBeastTame_OnUntamableDelegate.h"
#include "Templates/SubclassOf.h"
#include "SwBeastTameComponent.generated.h"

class AActor;
class AController;
class ARsAIController;
class ARsCharacter;
class ARsHero;
class ASwAICharacter;
class UAkAudioEvent;
class UAnimSequenceBase;
class UCurveFloat;
class UDamageType;
class UDecalComponent;
class UMaterialInterface;
class UNiagaraComponent;
class URsAIBehaviorStateMachine;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwBeastTameComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameRegressStarted OnTameRegressStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameRegressUpdate OnTameRegressUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameRegressStopped OnTameRegressStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameFullyRegressed OnTameFullyRegressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameAttempt OnTameAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnNonTamableAttempt OnNonTamableAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnUntamable OnUntamable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameSucceed OnTameSucceed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameDecayStarted OnTameDecayStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnProgressBoost OnProgressBoost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnProgressLost OnProgressLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameReturnHomeReset OnTameReturnHomeReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnTameMeterAdjusted OnTameMeterAdjusted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnUntamableAttempt OnUntamableAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBeastTame_OnStopTaming OnStopTaming;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeastTameMeterFillGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AIAllyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeastTameRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIBehaviorStateMachine> TamedAwarenessStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TameFinishAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AngryAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierReferenceRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierReferenceRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeastTameSpeedUpgradeAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TamerBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsTamedBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetamableOnTameTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetProgressOnTameStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TameStartFightingIterationsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TameSuccessFightingIterationsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TamedEffectBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TamingEffectBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTameable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTameHighLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTameSuccessHighLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTameRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngryAnimationCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTameWithDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroLoadoutFlags BeastTameLoadoutFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeedUpgradeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseProgressGainOnEvadePrcnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeProgressGainOnEvadePrcnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvadeBoostDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TameDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTameAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningRingFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WarningRingDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressLostOnDamagePrcnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TamingEffectMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TameSuccessHighlightDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioTamed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonTargetableWhileTricked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsControlledByPlayerAndNonTargetableByAIBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEncounteredEnemiesWhileTrciked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TameSuccessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TameTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHoldModeAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanStartTameRegressBasedOnAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTameRegressEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurTameTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TameTimeoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTameTimeoutOverriden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStartedTimeoutProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTimeAngryAnimationStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStoppedTimeoutProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIBehaviorStateMachine> DefaultAwarenessStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefaultFightActiveIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag AIDefaultTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBeTamed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTamed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TameProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurTameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TameStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEvadeSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentAttackEvadeInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDecalComponent* WarningRingDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASwAICharacter* OwnerAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsAIController* RsAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> TamingEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> TamedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsHero* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCleanedTame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TameDurationScale;
    
public:
    USwBeastTameComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTamingVFXBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UNiagaraComponent*> SpawnTameSuccessEffectsBP(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UNiagaraComponent*> SpawnTameStartEffectsBP(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable)
    void OwnerInstigatedZeroDamage(const FRsDamageParams& DamageInfo, AActor* OtherActor, AActor* WouldBeDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OwnerInstigatedAnyDamage(float Damage, const FRsDamageParams& DamageInfo, AActor* DamagedActor, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideTameTimeout(bool bEnableOverride, float InOverride);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTameSuccessBP();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHeroZTargeted(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnHeroUnsheathingDone();
    
    UFUNCTION(BlueprintCallable)
    void OnHeroSheathingDone();
    
    UFUNCTION(BlueprintCallable)
    void OnHeroInstantSheathe(bool bInUnsheathed);
    
    UFUNCTION(BlueprintCallable)
    void OnHeroExitedZTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnHeroEvaded();
    
    UFUNCTION(BlueprintCallable)
    void OnHeroCombatStateChanged(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float PrevHealth, float Health);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* DeadActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAwarnessLevelChanged(ARsAIController* InAIController, AActor* InActor, TEnumAsByte<ERsAIAwarenessLevel::Type> InPreviousAwarenessLevel, TEnumAsByte<ERsAIAwarenessLevel::Type> InNewAwarenessLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnArivedHome();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAIWakeStateChange(ARsAIController* InAIController, const bool bAwake);
    
    UFUNCTION(BlueprintCallable)
    void OnAIAttackTargetChangedEvent(ARsAIController* InAIController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTamingInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTamedAndNonTargetable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTamed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTamableBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHeroSheathed(ARsHero* InHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitTameUIBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitHeroBindingsBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTameProgressRate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceTriggerTameRegress(bool bInTameRegressEnabled, bool bInResetOnEnable);
    
    UFUNCTION(BlueprintCallable)
    void ForceTamed();
    
    UFUNCTION(BlueprintCallable)
    void ForceSendHome();
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseTame(bool bInAllowReTame);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeinitHeroBindingsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanRevengeModeBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartTameRegressBP();
    
};

