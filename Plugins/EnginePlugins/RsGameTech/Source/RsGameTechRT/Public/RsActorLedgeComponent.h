#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERsConstrainedJumpDirection.h"
#include "ERsLedgeEntryType.h"
#include "ERsLedgeInputDirection.h"
#include "ERsLedgeMode.h"
#include "ERsLedgeReachMode.h"
#include "ERsLedgeReachSurveyResult.h"
#include "ERsLedgeShimmyDirection.h"
#include "ERsLedgeShimmyTarget.h"
#include "ERsNavState.h"
#include "OnAttachToLedgeDelegate.h"
#include "OnEnterLedgeDelegate.h"
#include "OnPullupCommittedDelegate.h"
#include "OnPullupOverLedgeDelegate.h"
#include "RsCharacterAnimationData.h"
#include "RsCharacterNavigationComponent.h"
#include "RsCinematicNavigationDelegateDelegate.h"
#include "RsDisabledConstrainedJumpDirections.h"
#include "RsLedgeSurveyFrameInfo.h"
#include "RsActorLedgeComponent.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UAnimMontage;
class UDamageType;
class UObject;
class UPrimitiveComponent;
class URsActorLedgeSettings;
class URsJSONTweaksBook;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsActorLedgeComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachToLedge OnAttachToLedge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterLedge OnEnterLedge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPullupOverLedge OnPullupOverLedge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPullupCommitted OnPullupCommitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsActorLedgeSettings* m_settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TweakFile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsJSONTweaksBook* Tweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hasEnteredIdle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, FRsDisabledConstrainedJumpDirections> m_disabledJumpDirections;
    
public:
    URsActorLedgeComponent();
    UFUNCTION(BlueprintCallable)
    bool VaultLedge();
    
    UFUNCTION(BlueprintCallable)
    void UpdateReachState(ERsLedgeReachMode reachMode, float ReachAngle);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLedgeInputDirection();
    
    UFUNCTION(BlueprintCallable)
    void UpdateForcePullup(bool forcePullup);
    
    UFUNCTION(BlueprintCallable)
    void UnlockPadInput();
    
    UFUNCTION(BlueprintCallable)
    void TryRetargetHorizontalShimmy(float distanceRatio);
    
    UFUNCTION(BlueprintCallable)
    bool TryAttachToLedgeAtTransform(FTransform Transform, bool bSkipEntry);
    
    UFUNCTION(BlueprintCallable)
    void TriggerQueuedShimmyJump();
    
    UFUNCTION(BlueprintCallable)
    void TriggerQueuedShimmy(float shimmyDuration);
    
    UFUNCTION(BlueprintCallable)
    void TriggerQueuedCinematicNavigation();
    
    UFUNCTION(BlueprintCallable)
    void StopShimmy();
    
    UFUNCTION(BlueprintCallable)
    void StopReaching();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopPullup();
    
    UFUNCTION(BlueprintCallable)
    void StartVerticalShimmy(ERsLedgeShimmyDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void StartShimmyWithDuration(TEnumAsByte<ERsLedgeShimmyTarget::Type> Target, ERsLedgeShimmyDirection Direction, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPullup(float pullupAngle);
    
    UFUNCTION(BlueprintCallable)
    void StartHorizontalShimmy(ERsLedgeShimmyDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDropDownInputUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseGripForEntry(ERsLedgeEntryType EntryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseGrip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOnlyAllowStraightPullup() const;
    
    UFUNCTION(BlueprintCallable)
    void SetQueuedShimmyAnimation(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(const ERsLedgeMode ledgeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledJumpDirections(const UObject* Owner, const FRsDisabledConstrainedJumpDirections& disabledJumpDirections);
    
    UFUNCTION(BlueprintCallable)
    void ResetPendingShimmySurveys();
    
    UFUNCTION(BlueprintCallable)
    void ResetDisabledJumpDirections(const UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseLedge();
    
    UFUNCTION(BlueprintCallable)
    void ReenableFallWindowTimer();
    
    UFUNCTION(BlueprintCallable)
    bool QueueShimmy(const TEnumAsByte<ERsLedgeShimmyTarget::Type> Target, const ERsLedgeShimmyDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    bool QueueJumpOff(ERsConstrainedJumpDirection JumpDirection);
    
    UFUNCTION(BlueprintCallable)
    void QueueCinematicNavigation(const FRsCharacterAnimationData& AnimData, bool waitForTrigger, bool overrideEntry, const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, float Timeout, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    bool QueueBackwardsJumpOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PadInputIsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVaultLedgeCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVaultLedge(bool bComingFromSprint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionOutComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShimmyTargetReached(TEnumAsByte<ERsLedgeShimmyTarget::Type> Target);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnQueuedShimmyMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnQueuedJumpOffMontageEnded(UAnimMontage* Montage, bool interrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModeChanged(const ERsLedgeMode previousMode, const ERsLedgeMode newMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLedgeTick(float Dt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLedgeReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnLedgePullupComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnLedgePullupCommitted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLedgeEntryFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHeroStateChanged(ERsNavState NewState, ERsNavState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFoundLedge(const FRsLedgeSurveyFrameInfo& frameSurveyInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterInterrupted(ARsCharacter* InterruptedCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginLedgeIdle();
    
    UFUNCTION(BlueprintCallable)
    bool MantleLedge();
    
    UFUNCTION(BlueprintCallable)
    void LockPadInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaulting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShimmyJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReaching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNavTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMode(const ERsLedgeMode ledgeMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematicNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentShimmyInterruptible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideDropDownInputUI();
    
    UFUNCTION(BlueprintCallable)
    bool HasPotentialMantleOrVaultLedge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GripIsConfirm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInCurrentMode() const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ERsLedgeShimmyTarget::Type> GetShimmySurveysResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReachAngle(ERsLedgeReachMode reachMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerControllerMagnitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerControllerDirectionWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPlayerControllerDirectionLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsLedgeMode GetMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLockedLedgeTopNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLockedLedgeFrontNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLockedLedgeAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsActorLedgeSettings* GetLedgeSettings() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLeapSurveyResult(float& distanceToTargetLedge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsLedgeInputDirection GetLastFrameLedgeInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripTimerDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForcePullup() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetForcePullEntrySurveyResult();
    
    UFUNCTION(BlueprintCallable)
    bool GetDropDownSurveyResult(bool bUseExtrapolation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsLedgeShimmyTarget::Type> GetCurrentShimmyTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsLedgeShimmyDirection GetCurrentShimmyDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsLedgeReachMode GetCurrentReachMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPullupAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsLedgeInputDirection GetCurrentLedgeInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsLedgeEntryType GetCurrentLedgeEntryType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> GetCurrentAttachedComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttachedLedgeWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttachedLedgeSlope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttachedLedgeHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActiveLedgeRelativeDisplacementAndVelocity(FVector& Displacement, FVector& Velocity) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseLedge();
    
    UFUNCTION(BlueprintCallable)
    void ExitCinematicNavigationMode();
    
    UFUNCTION(BlueprintCallable)
    void EnterCinematicNavigationMode(bool overrideEntry, const FRsCinematicNavigationDelegate& cinematicNavigationDelegate, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DoShimmySurveys_Async(const ERsLedgeShimmyDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    ERsLedgeReachSurveyResult DoReachSurvey(ERsLedgeShimmyDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void DoQueuedJumpOff();
    
    UFUNCTION(BlueprintCallable)
    void DoMantleAndVaultSurvey_Async();
    
    UFUNCTION(BlueprintCallable)
    void DoLedgeDropDownSurvey_Async();
    
    UFUNCTION(BlueprintCallable)
    void DoLeapSurvey_Async(const ERsLedgeShimmyDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    bool DoForcePullLedgeEntry();
    
    UFUNCTION(BlueprintCallable)
    void DoForcePullEntrySurvey_Async();
    
    UFUNCTION(BlueprintCallable)
    bool DoDropDownEntry();
    
    UFUNCTION(BlueprintCallable)
    void DisableLedgeReattachment();
    
    UFUNCTION(BlueprintCallable)
    void DisableLedgeForRelease();
    
    UFUNCTION(BlueprintCallable)
    void DisableFallWindowTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DetermineValidLedgeEntryTypes(bool& canGrab, bool& canDoKneeEntry, bool& movingIntoLedgeVelocity, bool& movingIntoLedgePad, bool& willPassOverLedge) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingCinematicNavigation();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAndTriggerTransitions(ERsLedgeInputDirection frameInputDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERsLedgeInputDirection CategorizePadInput() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanVaultLedge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanRelease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPullup(float pullupAngle) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanMantleLedge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoLedgeDropDown() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanContinueLedgeGrab(float maxPitch, float maxRoll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPrepareForFrame(float Dt);
    
    UFUNCTION(BlueprintCallable)
    bool AttachToActiveLedge(ERsLedgeEntryType EntryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowShimmyRetargeting();
    
};

