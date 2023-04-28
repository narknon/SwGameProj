#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsZiplineMovementDirection.h"
#include "ESwAIBuddyAttachPoint.h"
#include "ESwAIBuddyDroidMoveMode.h"
#include "ESwAIBuddyState.h"
#include "SwAICharacter.h"
#include "SwBuddyDroidDelegateDelegate.h"
#include "SwAIBuddyDroid.generated.h"

class UPrimitiveComponent;
class URsPhysicalAnimationProfile;

UCLASS(Blueprintable)
class SWGAME_API ASwAIBuddyDroid : public ASwAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttachSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachLerpTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachLerpTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DetachTargetLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowProfileSocketWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfileIdleDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableBackpackIK;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBuddyDroidDelegate OnRequestDetachedFromWorkbenchFulfilled;
    
    ASwAIBuddyDroid();
    UFUNCTION(BlueprintCallable)
    void UnlockAttachPoint();
    
    UFUNCTION(BlueprintCallable)
    bool TryLockAttachPoint();
    
    UFUNCTION(BlueprintCallable)
    void TryDetachFromHero();
    
    UFUNCTION(BlueprintCallable)
    void TryAttachToHero(bool bImmediateAttach, bool bPerformAttachFromWall);
    
    UFUNCTION(BlueprintCallable)
    void SkipAttachingOnCinematicEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayAttachAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldJumpToPOIWhenDetaching() const;
    
    UFUNCTION(BlueprintCallable)
    void SetZiplineMoveDirection(ERsZiplineMovementDirection InMoveDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferredMoveMode(ESwAIBuddyDroidMoveMode MoveMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideDetachOffset(FVector TargetOffset, bool bProjectToNavmesh);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlapPrimitive(UPrimitiveComponent* InOverlapPrimitive);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentAttachPoint(ESwAIBuddyAttachPoint AttachPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetBuddyState(ESwAIBuddyState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightTurnedOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightTurnedOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetachLerpDone(bool bAnimationInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetachedFromHero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginAttachToHero();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachedToHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingAttachAfterCinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroInFlashlightZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsZiplineMovementDirection GetZiplineMoveDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwAIBuddyDroidMoveMode GetPreferredMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwAIBuddyAttachPoint GetCurrentAttachPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwAIBuddyAttachPoint GetClosestAttachPoint(const FVector& Location, float& OutDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwAIBuddyState GetBuddyState() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDetachFromHero();
    
    UFUNCTION(BlueprintCallable)
    void ExitZipline();
    
    UFUNCTION(BlueprintCallable)
    void EnterZipline();
    
    UFUNCTION(BlueprintCallable)
    void Dismount();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideDetachOffset();
    
    UFUNCTION(BlueprintCallable)
    void CheckOverlappingWithHero();
    
    UFUNCTION(BlueprintCallable)
    void AttachToHeroPoint();
    
    UFUNCTION(BlueprintCallable)
    void AttachToHero(bool bSetNewAttachPoint, ESwAIBuddyAttachPoint NewAttachPoint);
    
};

