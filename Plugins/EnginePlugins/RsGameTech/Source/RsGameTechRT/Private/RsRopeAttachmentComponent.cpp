#include "RsRopeAttachmentComponent.h"

void URsRopeAttachmentComponent::UpdateRopeHandAttachment(const int32 handAttachment) {
}

void URsRopeAttachmentComponent::UpdateLengthRopeHandAttachment(const int32 handAttachment) {
}

void URsRopeAttachmentComponent::UpdateClosestRopeHandAttachment(const int32 handAttachment) {
}

void URsRopeAttachmentComponent::UpdateAllRopeHandAttachments() {
}

void URsRopeAttachmentComponent::UpdateAllLengthRopeHandAttachments() {
}

void URsRopeAttachmentComponent::UpdateAllClosestRopeHandAttachments() {
}

void URsRopeAttachmentComponent::SetTwistAngleDegrees(const float TwistAngle) {
}

void URsRopeAttachmentComponent::SetSwingAxis(const FVector SwingAxis) {
}

void URsRopeAttachmentComponent::SetRopeAttachmentPoint(const FVector localPt, const FName Bone) {
}

void URsRopeAttachmentComponent::SetRopeAttachmentLength(const float Length) {
}

void URsRopeAttachmentComponent::ResetTwistAngle() {
}

bool URsRopeAttachmentComponent::RemoveRopeHandAttachment(const int32 handAttachment) {
    return false;
}

void URsRopeAttachmentComponent::OnNavStateChanged(ERsNavState NewState, ERsNavState PrevState) {
}

void URsRopeAttachmentComponent::OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsRopeAttachmentComponent::OnCharacterInterrupted(ARsCharacter* Character) {
}

bool URsRopeAttachmentComponent::NeedsStartSwing() const {
    return false;
}

bool URsRopeAttachmentComponent::IsSwingingForward() const {
    return false;
}

bool URsRopeAttachmentComponent::IsSwingingBackward() const {
    return false;
}

bool URsRopeAttachmentComponent::IsSwingIdle() const {
    return false;
}

bool URsRopeAttachmentComponent::IsAttachedToRope() const {
    return false;
}

float URsRopeAttachmentComponent::GetTwistAngleDegrees() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetSwingPhaseSigned() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetSwingPhaseAbsoluteSigned() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetSwingPhaseAbsolute() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetSwingPhase() const {
    return 0.0f;
}

FVector URsRopeAttachmentComponent::GetSwingDirection() const {
    return FVector{};
}

FVector URsRopeAttachmentComponent::GetSwingAxis() const {
    return FVector{};
}

float URsRopeAttachmentComponent::GetRopeStarterSwingVelocityThreshold() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetRopeStarterSwingPhaseThreshold() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetRopeIdleSwingVelocity() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetRopeIdleSwingPhase() const {
    return 0.0f;
}

float URsRopeAttachmentComponent::GetRopeAttachmentProgression() const {
    return 0.0f;
}

FVector URsRopeAttachmentComponent::GetRopeAttachmentPointWorld() const {
    return FVector{};
}

FVector URsRopeAttachmentComponent::GetRopeAttachmentPointLocal() const {
    return FVector{};
}

float URsRopeAttachmentComponent::GetRopeAttachmentLength() const {
    return 0.0f;
}

URsRopeComponent* URsRopeAttachmentComponent::GetAttachedRope() const {
    return NULL;
}

void URsRopeAttachmentComponent::DetachFromRope(const FRsDetachFromRopeParams& Params) {
}

int32 URsRopeAttachmentComponent::CountRopeHandAttachments() const {
    return 0;
}

void URsRopeAttachmentComponent::ClearRopeHandAttachments() {
}

FVector URsRopeAttachmentComponent::CalculateSwingImpulse(const FVector swingDir, const float swingStrength, const float swingDirectionInfluence, const float velocityDirectionInfluence, const bool bAdjustForSwingPhase) const {
    return FVector{};
}

FVector URsRopeAttachmentComponent::CalculateSwingAxisForAttachedRope(const FVector SwingDirection) const {
    return FVector{};
}

FVector URsRopeAttachmentComponent::CalculateSlowDownImpulse(const float slowDownStrength) const {
    return FVector{};
}

float URsRopeAttachmentComponent::CalculateSlowDownFactor(const FVector swingDir, const float minVelocityThreshold, const float slowdownOffset) const {
    return 0.0f;
}

float URsRopeAttachmentComponent::CalculateRopeAttachmentLengthAlongAxis(URsRopeComponent* Rope, const FVector Axis, const FVector localPt, const FName Bone) const {
    return 0.0f;
}

float URsRopeAttachmentComponent::CalculateRopeAttachmentLength(URsRopeComponent* Rope, const FVector localPt, const FName Bone) const {
    return 0.0f;
}

FVector URsRopeAttachmentComponent::CalculateReleaseImpulse(const FVector releaseDir, const float releaseStrength, const float releaseDirectionInfluence, const float velocityDirectionInfluence, const float upDirectionInfluence, const float forwardDirectionInfluence, const bool alignForwardWithSwinging) const {
    return FVector{};
}



bool URsRopeAttachmentComponent::AttachToRope(const FRsAttachToRopeParams& Params) {
    return false;
}

void URsRopeAttachmentComponent::ApplyTwistAngleDeltaDegrees(const float twistAngleDelta) {
}

void URsRopeAttachmentComponent::ApplySwingImpulse(const FVector swingDir, const float swingStrength, const float swingDirectionInfluence, const float velocityDirectionInfluence, const bool SetVelocity) {
}

void URsRopeAttachmentComponent::ApplySwingAttachImpulse(const FVector Direction, const float Strength) {
}

void URsRopeAttachmentComponent::ApplySlowDownImpulse(const float slowDownStrength) {
}

void URsRopeAttachmentComponent::ApplyReleaseImpulse(const FVector releaseDir, const float releaseStrength, const float releaseDirectionInfluence, const float velocityDirectionInfluence, const float upDirectionInfluence, const float forwardDirectionInfluence, const bool alignForwardWithSwinging, const bool SetVelocity) {
}

int32 URsRopeAttachmentComponent::AddRopeHandAttachmentAtLength(URsRopeComponent* Rope, const float attachmentLength, const FVector localPt, const FName Bone) {
    return 0;
}

int32 URsRopeAttachmentComponent::AddRopeHandAttachment(URsRopeComponent* Rope, const int32 ropeParticleIdx, const FVector localPt, const FName Bone) {
    return 0;
}

int32 URsRopeAttachmentComponent::AddClosestRopeHandAttachment(URsRopeComponent* Rope, const FVector localPt, const FName Bone) {
    return 0;
}

URsRopeAttachmentComponent::URsRopeAttachmentComponent() {
    // Null default object.
}

