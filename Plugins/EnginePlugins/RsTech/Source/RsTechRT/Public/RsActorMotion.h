#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimationAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ERsNavPermissionFlags -FallbackName=ERsNavPermissionFlags
#include "ERsActorMotionBoneConstraintOrientationType.h"
#include "ERsActorMotionBoneConstraintPositionType.h"
#include "ERsBase.h"
#include "ERsDeferredInfluenceType.h"
#include "ERsMotionAimDirectionMode.h"
#include "ERsMotionSample.h"
#include "RsGeoLocator.h"
#include "RsInfluence.h"
#include "RsMotionParmChangedEventDelegate.h"
#include "RsTopology.h"
#include "RsActorMotion.generated.h"

class URsActorTweaksBook;
class URsTweaks;
class USkeletalMeshComponent;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsActorMotion : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsActorTweaksBook* Tweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TweakFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionTweakFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateCollisionFromTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateCollisionFromComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCollisionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector UpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AppliedAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RelativeAngleToIntentDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InputDirectionZ;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMotionParmChangedEvent OnMotionParmChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRootMotionMovementParams PreviousRootMotionParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMasterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableMasterPoseMeshForCenterOfMass;
    
public:
    URsActorMotion();
    UFUNCTION(BlueprintCallable)
    bool UpdateConstrainedOrientation(const int32 constraintID, const FRsGeoLocator& Orientation, const float OrientationStrength);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateConstrainedBoneLocation(const int32 constraintID, const FName BoneName, const FRsGeoLocator& Location, const FVector2D linearRange, const FVector axisOrPlaneNormal, const FVector BoneOffset, const float Springiness, const float SpringDamping);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockMotionParmStack();
    
    UFUNCTION(BlueprintCallable)
    void Unfreeze();
    
    UFUNCTION(BlueprintCallable)
    void SetVisualDamping(const float motionDampFactor, const float motionDampOffSpeed, const float orientationDampFactor, const float orientationDampOffSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetUseGravityOverride(bool shouldOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetTopologyLossBasedClampEnabled(bool bInEnable, float MaxLoss, float MinDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetRsVelocity_ExpertOnly(const FVector NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetRsAngularVelocity_ExpertOnly(const FVector NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionDropOffCheckEnabled(const bool Enabled, const bool shouldOverride);
    
    UFUNCTION(BlueprintCallable)
    bool SetMotionTweaks(const URsTweaks* MotionTweaks);
    
    UFUNCTION(BlueprintCallable)
    bool SetMotionParm(const FName parmName, const float TweenTime, const FName InstanceName, const bool lockUntilTweened);
    
    UFUNCTION(BlueprintCallable)
    void SetMaintainedVelocityTarget(const FVector VelocityTarget, const ERsBase velocityBase, const bool inHorizontalPlane);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOverridingRootMotionDropOffCheck(const bool shouldOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityOverride(const FVector Gravity, const bool shouldOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeUberSkeletonRootMotion(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionFromTweaks(const FName tweakName, bool replaceOldTweaks);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionFromComponents(const FName SetName, bool replaceOldComponentCollision);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollisionFromAll(const FName SetName, bool replaceOldCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetClampToTopologyOnIdleIntent(bool& previousClampOnIdle, float& previousIntentThreshold, const bool clampOnIdleIntent, const float idleIntentThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAimDirectionMode(ERsMotionAimDirectionMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsoluteMaxVelocity(float absoluteMaxVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisualDamping();
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseConstraint(const int32 constraintID);
    
    UFUNCTION(BlueprintCallable)
    bool PushMotionTweaks(const URsTweaks* MotionTweaks, const float TweenTime, const FName& InstanceName);
    
    UFUNCTION(BlueprintCallable)
    bool PushMotionParm(const FName parmName, const float TweenTime, const FName InstanceName, const bool lockUntilTweened);
    
    UFUNCTION(BlueprintCallable)
    void PushInfluence(const FRsInfluence& influence, const bool isImpulse, const bool overrideExisting);
    
    UFUNCTION(BlueprintCallable)
    bool PushControllerOrientationSpeedScale(const float speedScale, const bool overrideExisting);
    
    UFUNCTION(BlueprintCallable)
    bool PopMotionTweaks(const URsTweaks* MotionTweaks, const float TweenTime, const FName& InstanceName);
    
    UFUNCTION(BlueprintCallable)
    bool PopMotionParm(const FName parmName, const float TweenTime, const FName InstanceName, const bool lockUntilTweened);
    
    UFUNCTION(BlueprintCallable)
    void PopControllerOrientationSpeedScale(const bool validatedPop);
    
    UFUNCTION(BlueprintCallable)
    void NotifyRootAttachmentChanged(bool bIsAttached);
    
    UFUNCTION(BlueprintCallable)
    int32 LockMotionParmStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionParmStackLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionParmActive(const FName parmName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasControllerOrientationSpeedScale(float& outOrientationScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseGravityOverride() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsTweaks* GetTweaks(const FName tweaksName) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRsVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMotionSample(const TEnumAsByte<ERsMotionSample> motionSample) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMaxVelocityInPadDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMaxVelocityInDirection(const FVector& Direction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMaxSpeedForMotionParm(const FName parmName, bool& bFoundMaxSpeed, float& maxSpeedReturnValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLean() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKineticWorldLocation(FTransform& WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRootMotionDropOffCheckEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOverridingRootMotionDropOffCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGroundTopologyMaterialCoverageRatio(TEnumAsByte<ERsNavPermissionFlags::Type> flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGravityOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGravity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsTopology GetExtrapolatedTopology(float lookAhead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEdgeLocation(FVector& edgeLocation, float& distToEdge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentCollisionTweaks() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetControllerOrientationSpeedForVelocity(const float VelocityTarget);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetControllerOrientationSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerInflexion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAngularVelocity(const float Dt) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsMotionAimDirectionMode GetAimDirectionMode() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze();
    
    UFUNCTION(BlueprintCallable)
    bool EnableClampToTopology(const bool enable);
    
    UFUNCTION(BlueprintCallable)
    bool DisableClampToTopology();
    
    UFUNCTION(BlueprintCallable)
    void DebugToggleCheatFlying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugGetResolvedMotionParm(FString& resolvedMotionParm) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugGetMotionParmStack(FString& motionParmStack) const;
    
    UFUNCTION(BlueprintCallable)
    int32 ConstrainOrientation(const FRsGeoLocator& Orientation, const float OrientationStrength);
    
    UFUNCTION(BlueprintCallable)
    int32 ConstrainBoneToLocation(const FName BoneName, const FRsGeoLocator& Location, const ERsActorMotionBoneConstraintPositionType PositionType, const ERsActorMotionBoneConstraintOrientationType orientationType, const FVector2D linearRange, const FVector axisOrPlaneNormal, const FVector BoneOffset, const float Springiness, const float SpringDamping);
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingInfluence(const TEnumAsByte<ERsDeferredInfluenceType> DeferredInfluence, const bool overrideExisting);
    
    UFUNCTION(BlueprintCallable)
    void ClearMaintainedVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ClearCollisionFromTweaks();
    
    UFUNCTION(BlueprintCallable)
    void ClearAbsoluteMaxVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ApplyRsVelocityImpulseLocal_ExpertOnly(const FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRsVelocityImpulse_ExpertOnly(const FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRsImpulseInfluence(const FVector InImpulse, float InDuration);
    
};

