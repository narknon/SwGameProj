#include "RsPlayerWallHangComponent.h"

bool URsPlayerWallHangComponent::TryTransitionIntoWallHang(bool bSkipEntryAnim) {
    return false;
}

bool URsPlayerWallHangComponent::TryFindWall(FRsCharacterWallSweepResult& OutWallSweepResult) const {
    return false;
}

bool URsPlayerWallHangComponent::StartWallHang(const FRsCharacterWallSweepResult& InWallSweepResult) {
    return false;
}

void URsPlayerWallHangComponent::StartTrackingSlideTime() {
}

bool URsPlayerWallHangComponent::ShouldFilterWallTopology() const {
    return false;
}

bool URsPlayerWallHangComponent::ShouldContinueWallHang_Implementation(const FRsCharacterWallSweepResult& InWallSweepResult) const {
    return false;
}

bool URsPlayerWallHangComponent::ShouldChimneyJump() {
    return false;
}

bool URsPlayerWallHangComponent::ShouldApplyWallFriction_Implementation() const {
    return false;
}

void URsPlayerWallHangComponent::SetWallHangState(ERsPlayerWallHangState NewState) {
}


void URsPlayerWallHangComponent::OnWallHangJump_Implementation(bool bChimneyJump) {
}


bool URsPlayerWallHangComponent::IsWallHanging() const {
    return false;
}

bool URsPlayerWallHangComponent::IsInChimney() {
    return false;
}

bool URsPlayerWallHangComponent::IsForcedWallSlide() const {
    return false;
}

FRsCharacterWallSweepResult URsPlayerWallHangComponent::GetWallSweepResult() const {
    return FRsCharacterWallSweepResult{};
}

FVector URsPlayerWallHangComponent::GetWallSearchDirection_Implementation() const {
    return FVector{};
}

FVector URsPlayerWallHangComponent::GetWallNormal() const {
    return FVector{};
}

ERsCharacterWallSide URsPlayerWallHangComponent::GetWallHangSide() const {
    return ERsCharacterWallSide::NotOnWall;
}

FVector URsPlayerWallHangComponent::GetUpAlongWall() const {
    return FVector{};
}

ERsCharacterWallSide URsPlayerWallHangComponent::GetLastWallHangSide() const {
    return ERsCharacterWallSide::NotOnWall;
}

void URsPlayerWallHangComponent::GetInputDirectionAndMagnitude_Implementation(FVector& OutInputDirection, float& OutInputMagnitude) const {
}

FVector URsPlayerWallHangComponent::GetForwardAlongWall() const {
    return FVector{};
}

ERsPlayerWallHangState URsPlayerWallHangComponent::GetCurrentWallHangState() const {
    return ERsPlayerWallHangState::NotWallHanging;
}

float URsPlayerWallHangComponent::GetChimneyWidth() {
    return 0.0f;
}

FVector URsPlayerWallHangComponent::GetChimneyCenterLocation() {
    return FVector{};
}

void URsPlayerWallHangComponent::EndWallHang() {
}

bool URsPlayerWallHangComponent::CanWallJumpFromWallHang_Implementation() const {
    return false;
}

bool URsPlayerWallHangComponent::CanWallHang_Implementation() const {
    return false;
}

bool URsPlayerWallHangComponent::CanStartWallHang_Implementation(const FRsCharacterWallSweepResult& InWallSweepResult) const {
    return false;
}

bool URsPlayerWallHangComponent::CanEverWallHang() const {
    return false;
}

bool URsPlayerWallHangComponent::CanAutoAttachWallHang_Implementation(const FRsCharacterWallSweepResult& InWallSweepResult) const {
    return false;
}

URsPlayerWallHangComponent::URsPlayerWallHangComponent() {
    // Null default object.
}

