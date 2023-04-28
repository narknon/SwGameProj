#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "OnPostUpdateRopeDelegate.h"
#include "OnRopeAttachedAirBeginDelegate.h"
#include "OnRopeAttachedAirEndDelegate.h"
#include "OnRopeAttachedDelegate.h"
#include "OnRopeAttachedGroundBeginDelegate.h"
#include "OnRopeAttachedGroundEndDelegate.h"
#include "OnRopeDetachedDelegate.h"
#include "OnRopeForcePullEndDelegate.h"
#include "OnRopeForcePullStartDelegate.h"
#include "RsSetRopeAttachmentParams.h"
#include "RsRopeComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class URsRopeAttachmentComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsRopeComponent : public USkinnedMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeAttached OnRopeAttached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeDetached OnRopeDetached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeForcePullStart OnRopeForcePullStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeForcePullEnd OnRopeForcePullEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeAttachedAirBegin OnRopeAttachedAirBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeAttachedAirEnd OnRopeAttachedAirEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeAttachedGroundBegin OnRopeAttachedGroundBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRopeAttachedGroundEnd OnRopeAttachedGroundEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostUpdateRope OnPostUpdateRope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeAdditiveStretchLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeParticleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeMotionDriverCollisionInterpolationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingRangeDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbAttachmentRangeDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredAttachmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableRopeCollisionUpToLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSwingSlowdownRangePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSwingSlowdownStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeAirDetachLengthInterpolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeGroundDetachLengthInterpolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideGroundMaxAttachmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeMeshRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeTileMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeRenderStrainedAirInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeRenderStrainedAirMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeRenderStrainedAirMaxAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeRenderStrainedGroundInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeRenderStrainedGroundMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeRenderStrainedGroundMaxAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeDeactivationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RopeCollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRopeCollisionEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAttachToRopeInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSwingOnRope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanClimbOnRope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanClimbAscendDescendOnRope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanClimbTurnOnRope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowRopeReattach: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSlideToPreferredAttachmentLength: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAttachToRopeOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanRopeStrafeOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFaceRopeWhenAttachedOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanForcePullRope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanForcePullRopeOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanForcePullRopeInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanForcePullRopeWithMotionDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForcePullRopeFromPreferredAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanForcePullRopeOverLength: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseForcePullRopeLengthMargin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnSettled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAutoDetachOverLength: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowResetRopePhysics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyRenderToAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderStrainedWhenAttachedInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderStrainedWhenAttachedOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowDeactivateRopeOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimSubstepDeltaTime_NotAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimSubsteps_NotAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimSubstepDeltaTime_Attached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimSubsteps_Attached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeStrafeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeForcePullLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSeparateLengthForRopeStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSeparateLengthForRopeForcePull: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsPole: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsRopeInteractable: 1;
    
public:
    URsRopeComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSlideToPreferredAttachmentLength() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTargetRopeLength(const float targetLength, const float timeToReachTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeUnstretchedLength(const float newLength);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeSwingAxis(const FVector SwingAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeStretched(const bool stretched, const bool interpolateRopeLength, const float timeToInterpolate);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeStretchDirection(const FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeParticleVelocity(const int32 ParticleIndex, const FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeParticleRadius(const float newRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeParticlePosition(const int32 ParticleIndex, const FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeMotionDriverCollisionEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeMotionDriver(USceneComponent* motionDriver, const bool EnableCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeCollisionEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeCollisionChannels(const int32 collisionChannels);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAwake(const bool awake);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAttachmentPoint(const FVector ropeAttachmentPtWorld);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAttachmentLength(const float attachmentLength);
    
    UFUNCTION(BlueprintCallable)
    bool SetRopeAttachment(const FRsSetRopeAttachmentParams& Params);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAdditiveStretchLength(const float newLength);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRopeLength(const float newLength);
    
    UFUNCTION(BlueprintCallable)
    void ResetRopeRenderStrainedAlpha();
    
    UFUNCTION(BlueprintCallable)
    void ResetRopePhysics(const bool keepAwake);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRopeParticleAttachment(const int32 ParticleIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRopeCollisionExclusionComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRopeCollisionExclusionActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllRopeParticleAttachments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopeStretched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopePhysicsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopeParticleAttached(const int32 ParticleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRopeActiveAndMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParticleIndexValid(const int32 ParticleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRopeMotionDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRopeAttachment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeUnstretchedLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeSwingAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeStretchedProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeStretchedLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeStretchDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopePreferredAttachmentLengthFromAnchor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeParticleVelocity(const int32 ParticleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeParticlePosition(const int32 ParticleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeParticleDefaultPosition(const int32 ParticleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRopeParticleAtLength(const float ropeLength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRopeMotionDriverCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetRopeMotionDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeCurrentMaxLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRopeCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeAttachmentPointWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeAttachmentPointLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeAttachmentLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsRopeAttachmentComponent* GetRopeAttachment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRopeAdditiveStretchLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreferredRopeAttachmentParticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRopeParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLengthForRopeParticle(const int32 ParticleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastRopeParticle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRopeLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetClosestParticleOnRope(int32& outClosestParticleIdx, float& outDistSq, const FVector queryPtWorld) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRopeVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ClearRopeAttachment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRopeSwing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRopeForcePull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRopeClimbTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRopeClimbAscendDescend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRopeClimb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateRopeLengthToPoint(const FVector& queryPtWorld) const;
    
    UFUNCTION(BlueprintCallable)
    void AttractRopeParticlesTowardsDefaultPosition(const float AttractionForce, const float DistanceThreshold);
    
    UFUNCTION(BlueprintCallable)
    void ApplyImpulseToRopeParticle(const int32 ParticleIndex, const FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void AddRopeParticleAttachment(const int32 ParticleIndex, const bool setParticlePosition, const FVector particlePosition, const bool autoWake);
    
    UFUNCTION(BlueprintCallable)
    void AddRopeCollisionExclusionComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void AddRopeCollisionExclusionActor(AActor* Actor);
    
};

