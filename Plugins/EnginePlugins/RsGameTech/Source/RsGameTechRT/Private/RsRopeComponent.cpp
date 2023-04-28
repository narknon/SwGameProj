#include "RsRopeComponent.h"

bool URsRopeComponent::ShouldSlideToPreferredAttachmentLength() const {
    return false;
}

void URsRopeComponent::SetTargetRopeLength(const float targetLength, const float timeToReachTarget) {
}

void URsRopeComponent::SetRopeUnstretchedLength(const float newLength) {
}

void URsRopeComponent::SetRopeSwingAxis(const FVector SwingAxis) {
}

void URsRopeComponent::SetRopeStretched(const bool stretched, const bool interpolateRopeLength, const float timeToInterpolate) {
}

void URsRopeComponent::SetRopeStretchDirection(const FVector Direction) {
}

void URsRopeComponent::SetRopeParticleVelocity(const int32 ParticleIndex, const FVector Velocity) {
}

void URsRopeComponent::SetRopeParticleRadius(const float newRadius) {
}

void URsRopeComponent::SetRopeParticlePosition(const int32 ParticleIndex, const FVector Position) {
}

void URsRopeComponent::SetRopeMotionDriverCollisionEnabled(const bool Enabled) {
}

void URsRopeComponent::SetRopeMotionDriver(USceneComponent* motionDriver, const bool EnableCollision) {
}

void URsRopeComponent::SetRopeCollisionEnabled(const bool Enabled) {
}

void URsRopeComponent::SetRopeCollisionChannels(const int32 collisionChannels) {
}

void URsRopeComponent::SetRopeAwake(const bool awake) {
}

void URsRopeComponent::SetRopeAttachmentPoint(const FVector ropeAttachmentPtWorld) {
}

void URsRopeComponent::SetRopeAttachmentLength(const float attachmentLength) {
}

bool URsRopeComponent::SetRopeAttachment(const FRsSetRopeAttachmentParams& Params) {
    return false;
}

void URsRopeComponent::SetRopeAdditiveStretchLength(const float newLength) {
}

void URsRopeComponent::SetCurrentRopeLength(const float newLength) {
}

void URsRopeComponent::ResetRopeRenderStrainedAlpha() {
}

void URsRopeComponent::ResetRopePhysics(const bool keepAwake) {
}

void URsRopeComponent::RemoveRopeParticleAttachment(const int32 ParticleIndex) {
}

void URsRopeComponent::RemoveRopeCollisionExclusionComponent(UPrimitiveComponent* Component) {
}

void URsRopeComponent::RemoveRopeCollisionExclusionActor(AActor* Actor) {
}

void URsRopeComponent::RemoveAllRopeParticleAttachments() {
}

bool URsRopeComponent::IsRopeStretched() const {
    return false;
}

bool URsRopeComponent::IsRopePhysicsActive() const {
    return false;
}

bool URsRopeComponent::IsRopeParticleAttached(const int32 ParticleIndex) const {
    return false;
}

bool URsRopeComponent::IsRopeActiveAndMoving() const {
    return false;
}

bool URsRopeComponent::IsParticleIndexValid(const int32 ParticleIndex) const {
    return false;
}

bool URsRopeComponent::HasRopeMotionDriver() const {
    return false;
}

bool URsRopeComponent::HasRopeAttachment() const {
    return false;
}

float URsRopeComponent::GetRopeUnstretchedLength() const {
    return 0.0f;
}

FVector URsRopeComponent::GetRopeSwingAxis() const {
    return FVector{};
}

float URsRopeComponent::GetRopeStretchedProgression() const {
    return 0.0f;
}

float URsRopeComponent::GetRopeStretchedLength() const {
    return 0.0f;
}

FVector URsRopeComponent::GetRopeStretchDirection() const {
    return FVector{};
}

float URsRopeComponent::GetRopePreferredAttachmentLengthFromAnchor() const {
    return 0.0f;
}

FVector URsRopeComponent::GetRopeParticleVelocity(const int32 ParticleIndex) const {
    return FVector{};
}

FVector URsRopeComponent::GetRopeParticlePosition(const int32 ParticleIndex) const {
    return FVector{};
}

FVector URsRopeComponent::GetRopeParticleDefaultPosition(const int32 ParticleIndex) const {
    return FVector{};
}

int32 URsRopeComponent::GetRopeParticleAtLength(const float ropeLength) const {
    return 0;
}

bool URsRopeComponent::GetRopeMotionDriverCollisionEnabled() const {
    return false;
}

USceneComponent* URsRopeComponent::GetRopeMotionDriver() const {
    return NULL;
}

float URsRopeComponent::GetRopeCurrentMaxLength() const {
    return 0.0f;
}

bool URsRopeComponent::GetRopeCollisionEnabled() const {
    return false;
}

FVector URsRopeComponent::GetRopeAttachmentPointWorld() const {
    return FVector{};
}

FVector URsRopeComponent::GetRopeAttachmentPointLocal() const {
    return FVector{};
}

float URsRopeComponent::GetRopeAttachmentLength() const {
    return 0.0f;
}

URsRopeAttachmentComponent* URsRopeComponent::GetRopeAttachment() const {
    return NULL;
}

float URsRopeComponent::GetRopeAdditiveStretchLength() const {
    return 0.0f;
}

int32 URsRopeComponent::GetPreferredRopeAttachmentParticle() const {
    return 0;
}

int32 URsRopeComponent::GetNumRopeParticles() const {
    return 0;
}

float URsRopeComponent::GetLengthForRopeParticle(const int32 ParticleIndex) const {
    return 0.0f;
}

int32 URsRopeComponent::GetLastRopeParticle() const {
    return 0;
}

float URsRopeComponent::GetCurrentRopeLength() const {
    return 0.0f;
}

void URsRopeComponent::GetClosestParticleOnRope(int32& outClosestParticleIdx, float& outDistSq, const FVector queryPtWorld) const {
}

void URsRopeComponent::ClearRopeVelocity() {
}

void URsRopeComponent::ClearRopeAttachment() {
}

bool URsRopeComponent::CanRopeSwing() const {
    return false;
}

bool URsRopeComponent::CanRopeForcePull() const {
    return false;
}

bool URsRopeComponent::CanRopeClimbTurn() const {
    return false;
}

bool URsRopeComponent::CanRopeClimbAscendDescend() const {
    return false;
}

bool URsRopeComponent::CanRopeClimb() const {
    return false;
}

float URsRopeComponent::CalculateRopeLengthToPoint(const FVector& queryPtWorld) const {
    return 0.0f;
}

void URsRopeComponent::AttractRopeParticlesTowardsDefaultPosition(const float AttractionForce, const float DistanceThreshold) {
}

void URsRopeComponent::ApplyImpulseToRopeParticle(const int32 ParticleIndex, const FVector Impulse) {
}

void URsRopeComponent::AddRopeParticleAttachment(const int32 ParticleIndex, const bool setParticlePosition, const FVector particlePosition, const bool autoWake) {
}

void URsRopeComponent::AddRopeCollisionExclusionComponent(UPrimitiveComponent* Component) {
}

void URsRopeComponent::AddRopeCollisionExclusionActor(AActor* Actor) {
}

URsRopeComponent::URsRopeComponent() {
    // Null default object.
}

