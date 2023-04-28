#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ERsClimbEntryType.h"
#include "ERsClimbMovementSurveyResult.h"
#include "ERsClimbState.h"
#include "ERsClimbSurfaceType.h"
#include "ERsConstrainedJumpDirection.h"
#include "OnEnterClimbDelegate.h"
#include "RsCharacterAnimationData.h"
#include "RsCharacterNavigationComponent.h"
#include "RsCinematicNavigationDelegateDelegate.h"
#include "RsConstrainedJumpWeights.h"
#include "RsDisabledConstrainedJumpDirections.h"
#include "RsClimbComponent.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UAnimMontage;
class UDamageType;
class UObject;
class UPrimitiveComponent;
class URsClimbSettings;
class URsJSONTweaksBook;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsClimbComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterClimb OnEnterClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsClimbSettings* m_settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TweakFile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsJSONTweaksBook* Tweaks;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, FRsDisabledConstrainedJumpDirections> m_disabledJumpDirections;
    
public:
    URsClimbComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateReachState(bool shouldReach);
    
    UFUNCTION(BlueprintCallable)
    void UnlockPadInputOrientation();
    
    UFUNCTION(BlueprintCallable)
    bool TryRetargetingClimbSameWallMovement();
    
    UFUNCTION(BlueprintCallable)
    bool TryAttachToClimbAtTransform(FTransform Transform, bool AlignWithActor, bool bSkipEntryAnim, bool drawDebug, float debugLifetime);
    
    UFUNCTION(BlueprintCallable)
    void TriggerSurfaceTransitionMotion(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void TriggerSurfaceTransition();
    
    UFUNCTION(BlueprintCallable)
    void TriggerQueuedClimbing(float climbDuration);
    
    UFUNCTION(BlueprintCallable)
    void TriggerQueuedCinematicNavigation();
    
    UFUNCTION(BlueprintCallable)
    void TriggerMovementSurfaceTransition();
    
    UFUNCTION(BlueprintCallable)
    bool StopClimbing();
    
    UFUNCTION(BlueprintCallable)
    void StartDurationBasedClimbing(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartClimbing();
    
    UFUNCTION(BlueprintCallable)
    void SkipGripInputForNextAttachment(float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void SkipEntryAnimationForNextAttach(float Timeout);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSurfaceTransitionPrompt(bool bWallToCeiling);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGripInputUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseGripForEntry(ERsClimbEntryType EntryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseGrip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUpdateGrabGripUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldTickBP() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMovementRetargetingAllowed(bool allowed);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementCancelingAllowed(bool allowed);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledJumpDirections(const UObject* Owner, const FRsDisabledConstrainedJumpDirections& disabledJumpDirections);
    
    UFUNCTION(BlueprintCallable)
    void SetCeilingHeadingImmediate(const FVector& desiredFacingDirection);
    
    UFUNCTION(BlueprintCallable)
    void RotateCeilingHeadingTowards(const FVector& desiredFacingDirection, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetDisabledJumpDirections(const UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseClimb();
    
    UFUNCTION(BlueprintCallable)
    void ReenableRotationInJumpAnimations();
    
    UFUNCTION(BlueprintCallable)
    bool QueueJumpOffWall(FRsConstrainedJumpWeights jumpWeights);
    
    UFUNCTION(BlueprintCallable)
    bool QueueJumpOffCeiling(FVector JumpDirection);
    
    UFUNCTION(BlueprintCallable)
    bool QueueClimbing();
    
    UFUNCTION(BlueprintCallable)
    void QueueCinematicNavigation(const FRsCharacterAnimationData& AnimData, bool waitForTrigger, const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, float Timeout, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSurfaceTransitionStarted(ERsClimbSurfaceType NewSurfaceType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSurfaceTransitionMovementTimedOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSurfaceTransitionFinished(ERsClimbSurfaceType NewSurfaceType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkipGripInputTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnSkipEntryInputTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedJumpTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedJumpMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedClimbingTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnDropOffStartedOrEnded(FGameplayTag DropoffTag, int32 TagCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClimbStateChanged(const ERsClimbState previousMode, const ERsClimbState newMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClimbReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClimbingTargetReached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClimbEntryFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterInterrupted(ARsCharacter* InterruptedCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginPivotAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttached();
    
    UFUNCTION(BlueprintCallable)
    void LockPadInputOrientation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallClimb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTryingToClimb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPadInputOrientationLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInState(ERsClimbState climbState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNavTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematicNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentSurfaceTransitionCancelable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentClimbMovementCancelable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentAttachmentHanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicNavigationQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCeilingClimb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSurfaceTransitionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideGripInputUI();
    
    UFUNCTION(BlueprintCallable)
    bool HasLedgeInDirection(const FVector2D padInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClimbingClaws() const;
    
    UFUNCTION(BlueprintCallable)
    bool HandleClimbGrabSurveyResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GripIsConfirm() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSurfaceTransitionSurveyResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerControllerMagnitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerControllerDirectionWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPlayerControllerDirectionLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsConstrainedJumpWeights GetJumpWeightsFromPadInput(FVector2D padInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsConstrainedJumpDirection GetJumpDirectionFromPadInput(FVector2D padInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripTimerDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsClimbState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsClimbEntryType GetCurrentEntryType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsClimbSurfaceType GetCurrentClimbSurfaceType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> GetCurrentAttachedComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsClimbSettings* GetClimbSettings() const;
    
    UFUNCTION(BlueprintCallable)
    ERsClimbMovementSurveyResult GetClimbMovementSurveysResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClimbCornerTransitionAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAngleBetweenCameraForwardAndClimbWallNormal() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseClimb();
    
    UFUNCTION(BlueprintCallable)
    void ExitCinematicNavigationMode();
    
    UFUNCTION(BlueprintCallable)
    void EnterCinematicNavigationMode(const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, FName Tag, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void DoSurfaceTransitionSurvey_Async();
    
    UFUNCTION(BlueprintCallable)
    void DoQueuedJump();
    
    UFUNCTION(BlueprintCallable)
    void DoClimbMovementSurveys_Async();
    
    UFUNCTION(BlueprintCallable)
    bool DoClimbGrabSurveys_Async();
    
    UFUNCTION(BlueprintCallable)
    void DisableRotationInJumpAnimations();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClimbFallTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void ClimbEntryTimerFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClimbAttachedTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingCinematicNavigation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanRelease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReach(const FVector2D padInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPrepareForFrame(float Dt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowSurfaceTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowForcePullEntry() const;
    
    UFUNCTION(BlueprintCallable)
    void AllowCurrentSurfaceTransitionCancel();
    
};

