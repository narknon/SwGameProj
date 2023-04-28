#include "RsActorMotion.h"

bool URsActorMotion::UpdateConstrainedOrientation(const int32 constraintID, const FRsGeoLocator& Orientation, const float OrientationStrength) {
    return false;
}

bool URsActorMotion::UpdateConstrainedBoneLocation(const int32 constraintID, const FName BoneName, const FRsGeoLocator& Location, const FVector2D linearRange, const FVector axisOrPlaneNormal, const FVector BoneOffset, const float Springiness, const float SpringDamping) {
    return false;
}

bool URsActorMotion::UnlockMotionParmStack() {
    return false;
}

void URsActorMotion::Unfreeze() {
}

void URsActorMotion::SetVisualDamping(const float motionDampFactor, const float motionDampOffSpeed, const float orientationDampFactor, const float orientationDampOffSpeed) {
}

void URsActorMotion::SetUseGravityOverride(bool shouldOverride) {
}

void URsActorMotion::SetTopologyLossBasedClampEnabled(bool bInEnable, float MaxLoss, float MinDistance) {
}

void URsActorMotion::SetRsVelocity_ExpertOnly(const FVector NewVelocity) {
}

void URsActorMotion::SetRsAngularVelocity_ExpertOnly(const FVector NewVelocity) {
}

void URsActorMotion::SetRootMotionDropOffCheckEnabled(const bool Enabled, const bool shouldOverride) {
}

bool URsActorMotion::SetMotionTweaks(const URsTweaks* MotionTweaks) {
    return false;
}

bool URsActorMotion::SetMotionParm(const FName parmName, const float TweenTime, const FName InstanceName, const bool lockUntilTweened) {
    return false;
}

void URsActorMotion::SetMaintainedVelocityTarget(const FVector VelocityTarget, const ERsBase velocityBase, const bool inHorizontalPlane) {
}

void URsActorMotion::SetIsOverridingRootMotionDropOffCheck(const bool shouldOverride) {
}

void URsActorMotion::SetGravityOverride(const FVector Gravity, const bool shouldOverride) {
}

void URsActorMotion::SetConsumeUberSkeletonRootMotion(const bool Enabled) {
}

bool URsActorMotion::SetCollisionFromTweaks(const FName tweakName, bool replaceOldTweaks) {
    return false;
}

bool URsActorMotion::SetCollisionFromComponents(const FName SetName, bool replaceOldComponentCollision) {
    return false;
}

bool URsActorMotion::SetCollisionFromAll(const FName SetName, bool replaceOldCollision) {
    return false;
}

void URsActorMotion::SetClampToTopologyOnIdleIntent(bool& previousClampOnIdle, float& previousIntentThreshold, const bool clampOnIdleIntent, const float idleIntentThreshold) {
}

void URsActorMotion::SetAimDirectionMode(ERsMotionAimDirectionMode Mode) {
}

void URsActorMotion::SetAbsoluteMaxVelocity(float absoluteMaxVelocity) {
}

void URsActorMotion::ResetVisualDamping() {
}

bool URsActorMotion::ReleaseConstraint(const int32 constraintID) {
    return false;
}

bool URsActorMotion::PushMotionTweaks(const URsTweaks* MotionTweaks, const float TweenTime, const FName& InstanceName) {
    return false;
}

bool URsActorMotion::PushMotionParm(const FName parmName, const float TweenTime, const FName InstanceName, const bool lockUntilTweened) {
    return false;
}

void URsActorMotion::PushInfluence(const FRsInfluence& influence, const bool isImpulse, const bool overrideExisting) {
}

bool URsActorMotion::PushControllerOrientationSpeedScale(const float speedScale, const bool overrideExisting) {
    return false;
}

bool URsActorMotion::PopMotionTweaks(const URsTweaks* MotionTweaks, const float TweenTime, const FName& InstanceName) {
    return false;
}

bool URsActorMotion::PopMotionParm(const FName parmName, const float TweenTime, const FName InstanceName, const bool lockUntilTweened) {
    return false;
}

void URsActorMotion::PopControllerOrientationSpeedScale(const bool validatedPop) {
}

void URsActorMotion::NotifyRootAttachmentChanged(bool bIsAttached) {
}

int32 URsActorMotion::LockMotionParmStack() {
    return 0;
}

bool URsActorMotion::IsMotionParmStackLocked() const {
    return false;
}

bool URsActorMotion::IsMotionParmActive(const FName parmName) const {
    return false;
}

bool URsActorMotion::HasControllerOrientationSpeedScale(float& outOrientationScale) const {
    return false;
}

bool URsActorMotion::GetUseGravityOverride() const {
    return false;
}

URsTweaks* URsActorMotion::GetTweaks(const FName tweaksName) const {
    return NULL;
}

FVector URsActorMotion::GetRsVelocity() const {
    return FVector{};
}

float URsActorMotion::GetMotionSample(const TEnumAsByte<ERsMotionSample> motionSample) const {
    return 0.0f;
}

FVector URsActorMotion::GetMaxVelocityInPadDirection() const {
    return FVector{};
}

FVector URsActorMotion::GetMaxVelocityInDirection(const FVector& Direction) const {
    return FVector{};
}

void URsActorMotion::GetMaxSpeedForMotionParm(const FName parmName, bool& bFoundMaxSpeed, float& maxSpeedReturnValue) const {
}

float URsActorMotion::GetLean() const {
    return 0.0f;
}

void URsActorMotion::GetKineticWorldLocation(FTransform& WorldLocation) const {
}

bool URsActorMotion::GetIsRootMotionDropOffCheckEnabled() const {
    return false;
}

bool URsActorMotion::GetIsOverridingRootMotionDropOffCheck() const {
    return false;
}

float URsActorMotion::GetGroundTopologyMaterialCoverageRatio(TEnumAsByte<ERsNavPermissionFlags::Type> flag) const {
    return 0.0f;
}

FVector URsActorMotion::GetGravityOverride() const {
    return FVector{};
}

FVector URsActorMotion::GetGravity() const {
    return FVector{};
}

FRsTopology URsActorMotion::GetExtrapolatedTopology(float lookAhead) {
    return FRsTopology{};
}

bool URsActorMotion::GetEdgeLocation(FVector& edgeLocation, float& distToEdge) const {
    return false;
}

FName URsActorMotion::GetCurrentCollisionTweaks() const {
    return NAME_None;
}

FRotator URsActorMotion::GetControllerOrientationSpeedForVelocity(const float VelocityTarget) {
    return FRotator{};
}

FRotator URsActorMotion::GetControllerOrientationSpeed() {
    return FRotator{};
}

float URsActorMotion::GetControllerInflexion() const {
    return 0.0f;
}

FVector URsActorMotion::GetAngularVelocity(const float Dt) const {
    return FVector{};
}

ERsMotionAimDirectionMode URsActorMotion::GetAimDirectionMode() const {
    return ERsMotionAimDirectionMode::UseTweak;
}

void URsActorMotion::Freeze() {
}

bool URsActorMotion::EnableClampToTopology(const bool enable) {
    return false;
}

bool URsActorMotion::DisableClampToTopology() {
    return false;
}

void URsActorMotion::DebugToggleCheatFlying() {
}

bool URsActorMotion::DebugGetResolvedMotionParm(FString& resolvedMotionParm) const {
    return false;
}

bool URsActorMotion::DebugGetMotionParmStack(FString& motionParmStack) const {
    return false;
}

int32 URsActorMotion::ConstrainOrientation(const FRsGeoLocator& Orientation, const float OrientationStrength) {
    return 0;
}

int32 URsActorMotion::ConstrainBoneToLocation(const FName BoneName, const FRsGeoLocator& Location, const ERsActorMotionBoneConstraintPositionType PositionType, const ERsActorMotionBoneConstraintOrientationType orientationType, const FVector2D linearRange, const FVector axisOrPlaneNormal, const FVector BoneOffset, const float Springiness, const float SpringDamping) {
    return 0;
}

void URsActorMotion::ClearPendingInfluence(const TEnumAsByte<ERsDeferredInfluenceType> DeferredInfluence, const bool overrideExisting) {
}

void URsActorMotion::ClearMaintainedVelocity() {
}

void URsActorMotion::ClearCollisionFromTweaks() {
}

void URsActorMotion::ClearAbsoluteMaxVelocity() {
}

void URsActorMotion::ApplyRsVelocityImpulseLocal_ExpertOnly(const FVector Impulse) {
}

void URsActorMotion::ApplyRsVelocityImpulse_ExpertOnly(const FVector Impulse) {
}

void URsActorMotion::ApplyRsImpulseInfluence(const FVector InImpulse, float InDuration) {
}

URsActorMotion::URsActorMotion() {
}

