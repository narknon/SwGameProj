#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BehaviorStateMachineTemplateTransitionEvaluateDelegateDelegate.h"
#include "EBehaviorStateMachineTemplate.h"
#include "ERsAIAwarenessReactionState.h"
#include "ERsAIAwarenessState.h"
#include "ERsAINavPathUpdateRule.h"
#include "ERsAIPOIRequestResult.h"
#include "ERsAIRole.h"
#include "ERsAIScriptingMode.h"
#include "RsAIAttackTargetChangedEventDelegate.h"
#include "RsAIAwarenessLevelChangedEventDelegate.h"
#include "RsAIAwarenessStateChangedEventDelegate.h"
#include "RsAIAwarenessStateSettings_Aggro.h"
#include "RsAIAwarenessStateSettings_Alert.h"
#include "RsAIBehaviorStateMachineChangedEventDelegate.h"
#include "RsAIBehaviorStateTransitionEventDelegate.h"
#include "RsAIControllerBase.h"
#include "RsAIFightSlotClaimDelegate.h"
#include "RsAIFightSlotUnclaimDelegate.h"
#include "RsAIPatrolPathCompletedEventDelegate.h"
#include "RsAIScreenStatusChangedEventDelegate.h"
#include "RsAISpawnIntroCompletedEventDelegate.h"
#include "RsAIWakeStateChangedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "RsAIController.generated.h"

class AActor;
class AController;
class APawn;
class ARsAILeashingActor;
class ARsAIPOI;
class UAnimMontage;
class UBehaviorTree;
class UDamageType;
class UObject;
class URsAIAllyEvaluator;
class URsAIAwarenessStateMachine;
class URsAIBehaviorState;
class URsAIBehaviorStateMachine;
class URsAICharacterDefinition;
class URsAIGoal;
class URsAIGoalManager;
class URsAITargetEvaluator;
class URsAIThreatEvaluator;
class URsTargetableComponent;

UCLASS(Blueprintable)
class ARsAIController : public ARsAIControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAwarenessStateChangedEvent OnAwarenessStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAwarenessLevelChangedEvent OnAwarenessLevelChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBehaviorStateMachineChangedEvent OnBehaviorStateMachineChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIBehaviorStateTransitionEvent OnBehaviorStateTransitionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnIntroCompletedEvent OnSpawnIntroCompletedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIPatrolPathCompletedEvent OnPatrolPathCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIFightSlotClaim OnAIFightSlotClaim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIFightSlotUnclaim OnAIFightSlotUnclaim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAttackTargetChangedEvent OnAIAttackTargetChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIScreenStatusChangedEvent OnAIScreenStatusChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIWakeStateChangedEvent OnAIWakeStateChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetFromAttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantMaintainsHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInterruptSpawnIntroByAwarenessStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIBehaviorStateMachine> BehaviorStateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIAwarenessStateMachine> AwarenessStateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* AsleepPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URsAIBehaviorStateMachine* BehaviorStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DontGarbageCollectDuringLifetimeOfCurrentBehaviorStateMachineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URsAIAwarenessStateMachine* AwarenessStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAIAllyEvaluator* AllyEvaluator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAIThreatEvaluator* ThreatEvaluator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAITargetEvaluator* TargetEvaluator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAIGoalManager* GoalManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpecialFightAccessRequested: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAwarenessReactions: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCrowdAvoidance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePathSmoothing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseNavLinks: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanTrackFocusWhileMoving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEverUpdateFocusLocationFromHomeRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAINavPathUpdateRule NavPathPredictionUpdateRule;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNavPathPredictionUpToDate: 1;
    
    ARsAIController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantToRunGoal(TSubclassOf<URsAIGoal> GoalType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsAIPOIRequestResult TestPOIAvailability(ARsAIPOI* InPOIActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUnsheatheWeaponOnSpawn() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetToAggro(AActor* SourceOfAwarenessChange, bool bForceActualBehaviorStateChange);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetThreatEvaluator(TSubclassOf<URsAIThreatEvaluator> ThreatEvaluatorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetEvaluator(TSubclassOf<URsAITargetEvaluator> TargetEvaluatorClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSourceOfLastAwarenessStateChange(AActor* NewActor);
    
    UFUNCTION(BlueprintCallable)
    void SetScriptingMode(TEnumAsByte<ERsAIScriptingMode::Type> NewScriptingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRole(TEnumAsByte<ERsAIRole::Type> NewAIRole);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideFocusTarget(AActor* FocusTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLeashingBounds(const ARsAILeashingActor* LeashingActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDelegatePOIActor(AActor* DelegateActor);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTargetOverrideActor(AActor* AttackTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAllyEvaluator(TSubclassOf<URsAIAllyEvaluator> AllyEvaluatorClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAICharacterDefinition(URsAICharacterDefinition* NewCharacterDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool SetAIBehaviorStateByName(FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound, bool bDynamicRootBehavior, UBehaviorTree* OverrideBehaviorTreeAsset, URsAIGoal* AssociatedGoal, bool bOnlyOverrideBehaviorTreeAssetIfStateDoesNotAlreadyHaveOne);
    
    UFUNCTION(BlueprintCallable)
    void SetAIBehaviorState(const URsAIBehaviorState* NewStateTemplate, bool bStackState, bool bDynamicRootBehavior);
    
    UFUNCTION(BlueprintCallable)
    void ResumeReturnHome();
    
    UFUNCTION(BlueprintCallable)
    void ResumeDefaultBehavior();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUninitializeAI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitializeAI();
    
public:
    UFUNCTION(BlueprintCallable)
    float QueueUpAmbientToAlertTransition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeNoDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPreFactionChange(URsTargetableComponent* TargetableComponent, FGameplayTag PreviousFactionTag, FGameplayTag NewFactionTag);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnNavLinkTraversalSyncEnding(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnNavLinkConstrainedMovementAnimEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnNavLinkApproachSyncEnding(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnFactionChanged(URsTargetableComponent* TargetableComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_StopWaiting();
    
    UFUNCTION(BlueprintCallable)
    void K2_StartWaiting();
    
    UFUNCTION(BlueprintCallable)
    void K2_SetHomeLocation(const FVector& InHomeLocation);
    
    UFUNCTION(BlueprintCallable)
    void K2_GrantSpecialFightAccess(float RetryTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaiting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPatrolPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningDefaultBehaviorStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnScreenUnoccluded(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInConversation() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBehaviorMachineInState(FName StateNameToTest, bool AssertOnNotFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwareOfThreat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackTargetOverridden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackTargetLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpawnIntroPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPathToAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetThreatListOfActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSourceOfLastAwarenessStateChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsAIScriptingMode::Type> GetScriptingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsAIRole::Type> GetRole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsAIAwarenessState::Type> GetPreviousAwarenessState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOverrideFocusTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumThreats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetHomeRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsAIGoalManager* GetGoalManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistance2DToPathCorner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDelegatePOIActor() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetDefaultBehaviorStateMachineClass(TSubclassOf<URsAIBehaviorStateMachine>& OutClass) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsAIPOI* GetCurrentPOI() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentBehaviorStateName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsAIBehaviorStateMachine* GetBehaviorStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsAIAwarenessState::Type> GetAwarenessState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsAIAwarenessReactionState::Type> GetAwarenessReactionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackTargetAsActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsAIAwarenessStateSettings_Alert GetAlertAwarenessSettings(bool& HasValidValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsAICharacterDefinition* GetAICharacterDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsAIAwarenessStateSettings_Aggro GetAggroAwarenessSettings(bool& HasValidValue) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishPOIBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindHuntTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteUpAmbientToAlertTransition();
    
    UFUNCTION(BlueprintCallable)
    void EnableCrowdAvoidance(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DontGarbageCollectDuringLifetimeOfCurrentBehaviorStateMachine(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool DisableReturnHome();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideFocusTarget();
    
    UFUNCTION(BlueprintCallable)
    void ClearLeashingBounds();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttackTargetOverride();
    
    UFUNCTION(BlueprintCallable)
    ERsAIPOIRequestResult BeginPOIBehavior(ARsAIPOI* InPOIActor, bool bInterruptCurrent);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBehaviorStateMachineSetter(TSubclassOf<URsAIBehaviorStateMachine> NewBehaviorStateMachineClass);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBehaviorStateMachineFromTemplate(UBehaviorTree* InitialStateBehavior, EBehaviorStateMachineTemplate StateMachineTemplate, const FBehaviorStateMachineTemplateTransitionEvaluateDelegate& TransitionEvaluateDelegate, float MinPlayerDistanceBeforeTransition, bool bResetHomePositionOnResumeDefaultBehavior, bool bOnlyIfAlive);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBehaviorStateMachine(TSubclassOf<URsAIBehaviorStateMachine> NewBehaviorStateMachine, bool bOnlyIfAlive, bool bIsFromTemplate);
    
    UFUNCTION(BlueprintCallable)
    void AbortPOIBehavior(bool bTriggersUsePOIEvent);
    
};

