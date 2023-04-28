#include "RsJumpComponent.h"

bool URsJumpComponent::TryZTargetDoubleJumpWithJumpDefinition(URsDoubleJumpDefinition* JumpDefinition) {
    return false;
}

bool URsJumpComponent::TryZTargetDoubleJump() {
    return false;
}

bool URsJumpComponent::TryWallScurryJump() {
    return false;
}

bool URsJumpComponent::TryWallJumpWithWallNormalAndSettings(const FVector& WallNormal, const FVector& ForwardAlongWall, const FRsWallJumpData& WallJumpSettings) {
    return false;
}

bool URsJumpComponent::TryWallJumpWithWallNormalAndJumpDefinition(const FVector& WallNormal, const FVector& ForwardAlongWall, URsWallJumpDefinition* JumpDefinition) {
    return false;
}

bool URsJumpComponent::TryWallJumpWithWallNormal(const FVector& WallNormal, const FVector& ForwardAlongWall) {
    return false;
}

bool URsJumpComponent::TryWallJumpWithJumpDefinition(URsWallJumpDefinition* JumpDefinition) {
    return false;
}

bool URsJumpComponent::TryWallJump() {
    return false;
}

bool URsJumpComponent::TryJumpWithJumpDefinition(URsJumpDefinition* JumpDefinition, bool bStopMontages) {
    return false;
}

bool URsJumpComponent::TryJumpInDirectionWithJumpDefinition(FVector4 JumpDirection, URsJumpDefinition* JumpDefinition, bool bStopMontages) {
    return false;
}

bool URsJumpComponent::TryJumpInDirection(FVector4 JumpDirection, bool bStopMontages) {
    return false;
}

bool URsJumpComponent::TryJump() {
    return false;
}

bool URsJumpComponent::TryDoubleJumpWithJumpDefinition(URsDoubleJumpDefinition* JumpDefinition) {
    return false;
}

bool URsJumpComponent::TryDoubleJump() {
    return false;
}

bool URsJumpComponent::TryConstrainedJumpInDirection(ERsConstrainedJumpDirection JumpDirection, FMatrix JumpSpace, FVector CurrentMovementVelocity, UAnimMontage* JumpMontage, bool bInputWasMirrored) {
    return false;
}

bool URsJumpComponent::TryConstrainedJump(const FRsConstrainedJumpWeights& jumpWeights, FMatrix JumpSpace, FVector CurrentMovementVelocity, UAnimMontage* JumpMontage, bool bInputWasMirrored) {
    return false;
}

bool URsJumpComponent::TryConstrainedDoubleJump() {
    return false;
}

bool URsJumpComponent::TryChimneyJumpWithSettings(const FVector& WallNormal, const FVector& ForwardAlongWall, const FVector& ChimneyCenterLocation, const FRsWallJumpData& WallJumpSettings) {
    return false;
}

bool URsJumpComponent::TryChimneyJumpWithJumpDefinition(const FVector& WallNormal, const FVector& ForwardAlongWall, const FVector& ChimneyCenterLocation, URsChimneyJumpDefinition* JumpDefinition) {
    return false;
}

bool URsJumpComponent::TryAngleLimitedDoubleJumpWithJumpDefinition(URsDoubleJumpDefinition* JumpDefinition, FVector JumpTargetDirection) {
    return false;
}

void URsJumpComponent::StopJump() {
}

void URsJumpComponent::ResetDoubleJump() {
}



void URsJumpComponent::OnHitReaction(const FRsReactionParameters& ReactionParameters) {
}

void URsJumpComponent::OnConstrainedJumpFinished(URsHeroStateModifierDefinition* HeroStateModifier) {
}

void URsJumpComponent::JumpAscend() {
}

void URsJumpComponent::JumpApex() {
}

bool URsJumpComponent::IsDoingConstrainedJump() const {
    return false;
}

FVector URsJumpComponent::GetWallNormalForCurrentWallJump() const {
    return FVector{};
}

FVector4 URsJumpComponent::GetJumpControllerDirection() const {
    return FVector4{};
}

FVector URsJumpComponent::GetDefaultForwardVectorAlongWall(const FVector& WallNormal) const {
    return FVector{};
}

TEnumAsByte<ERsJumpState> URsJumpComponent::GetCurrentJumpState() const {
    return NotJumping;
}

bool URsJumpComponent::CanWallScurryJump_Implementation() const {
    return false;
}

URsJumpComponent::URsJumpComponent() {
    // Null default object.
}

