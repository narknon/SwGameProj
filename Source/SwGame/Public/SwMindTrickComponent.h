#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ERsHeroLoadoutFlags.h"
#include "EMindTrickState.h"
#include "ESwHighlightType.h"
#include "SwMindTrick_OnMindTrickAttemptDelegate.h"
#include "SwMindTrick_OnMindTrickSucceedDelegate.h"
#include "SwMindTrick_OnNonTrickableAttemptDelegate.h"
#include "SwMindTrick_OnNonTrickableDelegate.h"
#include "SwMindTrick_OnProgressLostDelegate.h"
#include "SwMindTrick_OnStopTrickingDelegate.h"
#include "SwMindTrick_OnTrickAttemptFailDelegate.h"
#include "Templates/SubclassOf.h"
#include "SwMindTrickComponent.generated.h"

class AActor;
class ARsAIController;
class ARsCharacter;
class ARsHero;
class ASwAICharacter;
class UAkAudioEvent;
class UAnimSequenceBase;
class UBehaviorTree;
class UCurveFloat;
class UNiagaraComponent;
class URsAIBehaviorStateMachine;
class URsTargetableComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwMindTrickComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnMindTrickAttempt OnMindTrickAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnTrickAttemptFail OnTrickAttemptFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnNonTrickable OnNonTrickable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnMindTrickSucceed OnMindTrickSucceed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnProgressLost OnProgressLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnNonTrickableAttempt OnNonTrickableAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrick_OnStopTricking OnStopTricking;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MindTrickMeterFillGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AIAllyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MindTrickRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIBehaviorStateMachine> MindTrickedAwarenessStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MindTrickFinishAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AngryAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MindTrickEndAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MindTrickBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MindTrickIdleBeaviorBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsMindTrickedBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwHighlightType HighlightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAggroWhenMindTrickEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTreeToRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MindTrickSuccessFightingIterationsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MindTrickedEffectBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMindTrickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMindTrickSuccessHighLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMindTrickRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngryAnimationCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanMindTrickWithDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroLoadoutFlags MindTrickLoadoutFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationToTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAwarenesOnAIRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMindTrickAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressLostOnDamagePrcnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickingEffectMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MindTrickFactionSwitchDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MindTrickSuccessHighlightDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioMindTricked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountOnlyDamageInflictingAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountOnlyFinishedAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MindTrickMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonTargetableWhileTricked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsControlledByPlayerAndNonTargetableByAIBBVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MindTrickBehaviorStartTime;
    
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
    EMindTrickState MindTrickState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPausedTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBeMindTricked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMindTricked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MindTrickStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MindTrickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARsCharacter*> AwareOfCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASwAICharacter* OwnerAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsAIController* RsAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> TrickingEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> MindTrickedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StoredTurnInPlaceThresholdMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StoredTurnInPlaceThresholdMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsHero* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCleanedMindTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingOutro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MindTrickHoldSuccessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSetAllyTag;
    
public:
    USwMindTrickComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrickingVFXBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UNiagaraComponent*> SpawnMindTrickSuccessEffectsBP(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UNiagaraComponent*> SpawnMindTrickStartEffectsBP(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllyFactionTag(URsTargetableComponent* TargetableComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RunMindTrickBehavior() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimSequenceBase* OverrideMindTrickFinishAnimation(UAnimSequenceBase* InMindTrickFinishAnimation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMindTrickSuccessBP();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float PrevHealth, float Health);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitingMindTricked();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* DeadActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAIWakeStateChange(ARsAIController* InAIController, const bool bAwake);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrickingInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTrickedAndNonTargetable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTrickableBP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMindTricked() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHeroSheathed(ARsHero* InHero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitMindTrickUIBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitHeroBindingsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMindTrickSuccessFightingIterations(int32 InDefaultFightActiveIterations) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceReleaseMindTrick(bool bInAllowReMindTrick);
    
    UFUNCTION(BlueprintCallable)
    void ForceMindTricked();
    
    UFUNCTION(BlueprintCallable)
    void FinishMindTrickBT();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeinitHeroBindingsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanRevengeModeBP();
    
};

