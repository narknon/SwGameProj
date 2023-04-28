#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RsRopeAttachmentComponent.h"
#include "ERsTopologyMode.h"
#include "ESwRopeAttachmentHandPosition.h"
#include "ESwRopeAttachmentSlideToAttachmentLengthState.h"
#include "ESwRopeAttachmentState.h"
#include "OnSwRopeAttachmentComponentStateChangedDelegate.h"
#include "SwRopeAttachmentComponent.generated.h"

class AActor;
class ARsHero;
class UAnimInstance;
class UAnimationAsset;
class URsRopeComponent;
class USwRopeAttachmentSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwRopeAttachmentComponent : public URsRopeAttachmentComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwRopeAttachmentSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsRopeComponent* PossibleRopeAttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SwingInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClimbInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingInputMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SwingInputActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SwingTimeToImpactAbsolute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SwingTimeToImpactNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbInputMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ClimbInputActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwRopeAttachmentSlideToAttachmentLengthState SlideToAttachmentLengthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideToAttachmentVelocity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwRopeAttachmentComponentStateChanged OnStateChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsHero* m_hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_animInstance;
    
public:
    USwRopeAttachmentComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SwingImpactFound() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupRopeHandAttachments(URsRopeComponent* Rope, const bool leftHand, const bool rightHand, const bool activateAutoAttach);
    
    UFUNCTION(BlueprintCallable)
    void SetHandPosition(ESwRopeAttachmentHandPosition HandPosition);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRopeHipAttachment();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRopeHandAttachments(bool bRemoveLeftHand, bool bRemoveRightHand);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGroundTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AActor* DeadActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingInputActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRopeValidForAttachment(const URsRopeComponent* Rope, const bool bIsAutoAttachment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsRopeAttachAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRopeDetachMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRopeAttachMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRopeAnticipateAttachMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSwingTurningState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSwingStartedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSwingingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSwingingForwardState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSwingingBackwardState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStrafingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDetachingFromRopeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInClimbTurningState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInClimbingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsForcePullingRope(URsRopeComponent* Rope) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbInputActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCeilingClimbTransitionInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnticipateRopeAttachAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeInCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeAttachedToRope() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetTargetSwingingTurnAroundState(ESwRopeAttachmentState& outNextState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESwRopeAttachmentState GetTargetClimbState() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwRopeAttachmentState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwRopeAttachmentState GetNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetMovementInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsRopeComponent* GetLastAttachedRope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwRopeAttachmentHandPosition GetHandPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsRopeComponent* FindRopeForAttachment(int32& outClosestParticleIndex, float& outDistSq, bool bUseAnticapteAttachRope) const;
    
    UFUNCTION(BlueprintCallable)
    void DontDetachRopeOnNextSync();
    
    UFUNCTION(BlueprintCallable)
    void DetachFromRopeWithMontage(UAnimationAsset* Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStateChanged(const ESwRopeAttachmentState OldState, const ESwRopeAttachmentState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnPossibleRopeAttachFound(URsRopeComponent* Rope);
    
    UFUNCTION(BlueprintCallable)
    void AddRopeHipAttachment(const FName& Bone);
    
};

