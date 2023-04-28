#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERsCharacterReaction.h"
#include "ERsHeroLoadoutFlags.h"
#include "NarrativeEvent.h"
#include "RsAbility.h"
#include "SwForceMeterRow.h"
#include "SwMindTrickComponent_OnNonTrickableDelegate.h"
#include "SwMindTrickComponent_OnTrickAttemptFailDelegate.h"
#include "SwForceMindTrickAbility.generated.h"

class AActor;
class ARsHero;
class UAkAudioEvent;
class UAnimMontage;
class URsAbilityInstanceData;
class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class USwForceMindTrickAbility : public URsAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrickComponent_OnTrickAttemptFail OnTrickAttemptFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMindTrickComponent_OnNonTrickable OnNonTrickableAttempt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsCharacterReaction> UntrickableTargetReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroLoadoutFlags MindTrickLoadoutFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarrativeEvent MindTrickStartTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarrativeEvent MindTrickSuccessTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarrativeEvent MindTrickFailTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MindTrickTutorialLevelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MindTrickTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* StateModifierWhileTricking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailureAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HoldSuccessAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateTotargetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAnimationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGracefulEffectsTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTrickedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayTriggerForEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MindTrickActivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MindTrickTriggerDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAbilityInstanceData* TriggerDelayInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTriggerDelayIsHeld;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsHero> Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialStartPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialSuccessPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTutorialFailPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFinishedTricking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFinishingAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontagePlaying;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> MindTrickedActors;
    
public:
    USwForceMindTrickAbility();
    UFUNCTION(BlueprintCallable)
    void StopMindTrick();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetZTargetBP(AActor* InActor, bool bInSpawnIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnTriggerSuccessBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoldRelease();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsZTargetingBP(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetValidBP(const AActor* InTarget) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMindTrickTriggerDelayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMindTrickInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoMindTrick() const;
    
};

