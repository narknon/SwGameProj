#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsNavState.h"
#include "ERsRopeAttachmentAutoAlignMode.h"
#include "ERsRopeHandAttachmentAutoUpdateMode.h"
#include "RsAttachToRopeParams.h"
#include "RsDetachFromRopeParams.h"
#include "RsHeroComponent.h"
#include "RsRopeAttachmentComponent.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UDamageType;
class URsRopeComponent;
class URsSharedNavigationSettings;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsRopeAttachmentComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSharedNavigationSettings* SharedNavSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsRopeAttachmentAutoAlignMode AutoAlignMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AutoAlignTargetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAlignmentStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAngleToTargetAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingSlowdownRangePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingSlowdownStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingAlignmentStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingLimitStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingAlignmentDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsRopeHandAttachmentAutoUpdateMode RopeSegmentAttachmentAutoUpdateMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URsRopeComponent* m_attachedRope;
    
public:
    URsRopeAttachmentComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateRopeHandAttachment(const int32 handAttachment);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLengthRopeHandAttachment(const int32 handAttachment);
    
    UFUNCTION(BlueprintCallable)
    void UpdateClosestRopeHandAttachment(const int32 handAttachment);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllRopeHandAttachments();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllLengthRopeHandAttachments();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllClosestRopeHandAttachments();
    
    UFUNCTION(BlueprintCallable)
    void SetTwistAngleDegrees(const float TwistAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetSwingAxis(const FVector SwingAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAttachmentPoint(const FVector localPt, const FName Bone);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAttachmentLength(const float Length);
    
    UFUNCTION(BlueprintCallable)
    void ResetTwistAngle();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRopeHandAttachment(const int32 handAttachment);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavStateChanged(ERsNavState NewState, ERsNavState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterInterrupted(ARsCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsStartSwing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingingForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingingBackward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachedToRope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTwistAngleDegrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingPhaseSigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingPhaseAbsoluteSigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingPhaseAbsolute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSwingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSwingAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeStarterSwingVelocityThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeStarterSwingPhaseThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeIdleSwingVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeIdleSwingPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeAttachmentProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeAttachmentPointWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeAttachmentPointLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeAttachmentLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsRopeComponent* GetAttachedRope() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromRope(const FRsDetachFromRopeParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountRopeHandAttachments() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRopeHandAttachments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateSwingImpulse(const FVector swingDir, const float swingStrength, const float swingDirectionInfluence, const float velocityDirectionInfluence, const bool bAdjustForSwingPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateSwingAxisForAttachedRope(const FVector SwingDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateSlowDownImpulse(const float slowDownStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateSlowDownFactor(const FVector swingDir, const float minVelocityThreshold, const float slowdownOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateRopeAttachmentLengthAlongAxis(URsRopeComponent* Rope, const FVector Axis, const FVector localPt, const FName Bone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateRopeAttachmentLength(URsRopeComponent* Rope, const FVector localPt, const FName Bone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateReleaseImpulse(const FVector releaseDir, const float releaseStrength, const float releaseDirectionInfluence, const float velocityDirectionInfluence, const float upDirectionInfluence, const float forwardDirectionInfluence, const bool alignForwardWithSwinging) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnRopeDetach(URsRopeComponent* Rope);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnRopeAttach(URsRopeComponent* Rope);
    
    UFUNCTION(BlueprintCallable)
    bool AttachToRope(const FRsAttachToRopeParams& Params);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTwistAngleDeltaDegrees(const float twistAngleDelta);
    
    UFUNCTION(BlueprintCallable)
    void ApplySwingImpulse(const FVector swingDir, const float swingStrength, const float swingDirectionInfluence, const float velocityDirectionInfluence, const bool SetVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplySwingAttachImpulse(const FVector Direction, const float Strength);
    
    UFUNCTION(BlueprintCallable)
    void ApplySlowDownImpulse(const float slowDownStrength);
    
    UFUNCTION(BlueprintCallable)
    void ApplyReleaseImpulse(const FVector releaseDir, const float releaseStrength, const float releaseDirectionInfluence, const float velocityDirectionInfluence, const float upDirectionInfluence, const float forwardDirectionInfluence, const bool alignForwardWithSwinging, const bool SetVelocity);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRopeHandAttachmentAtLength(URsRopeComponent* Rope, const float attachmentLength, const FVector localPt, const FName Bone);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRopeHandAttachment(URsRopeComponent* Rope, const int32 ropeParticleIdx, const FVector localPt, const FName Bone);
    
    UFUNCTION(BlueprintCallable)
    int32 AddClosestRopeHandAttachment(URsRopeComponent* Rope, const FVector localPt, const FName Bone);
    
};

