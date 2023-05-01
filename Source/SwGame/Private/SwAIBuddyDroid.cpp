#include "SwAIBuddyDroid.h"

void ASwAIBuddyDroid::UnlockAttachPoint() {
}

bool ASwAIBuddyDroid::TryLockAttachPoint() {
    return false;
}

void ASwAIBuddyDroid::TryDetachFromHero() {
}

void ASwAIBuddyDroid::TryAttachToHero(bool bImmediateAttach, bool bPerformAttachFromWall) {
}

void ASwAIBuddyDroid::SkipAttachingOnCinematicEnd() {
}

bool ASwAIBuddyDroid::ShouldPlayAttachAnimation() const {
    return false;
}

bool ASwAIBuddyDroid::ShouldJumpToPOIWhenDetaching() const {
    return false;
}

void ASwAIBuddyDroid::SetZiplineMoveDirection(ERsZiplineMovementDirection InMoveDirection) {
}

void ASwAIBuddyDroid::SetPreferredMoveMode(ESwAIBuddyDroidMoveMode MoveMode) {
}

void ASwAIBuddyDroid::SetOverrideDetachOffset(FVector TargetOffset, bool bProjectToNavmesh) {
}

void ASwAIBuddyDroid::SetOverlapPrimitive(UPrimitiveComponent* InOverlapPrimitive) {
}

bool ASwAIBuddyDroid::SetCurrentAttachPoint(ESwAIBuddyAttachPoint AttachPoint) {
    return false;
}

void ASwAIBuddyDroid::SetBuddyState(ESwAIBuddyState State) {
}







bool ASwAIBuddyDroid::IsPendingAttachAfterCinematic() const {
    return false;
}

bool ASwAIBuddyDroid::IsHeroInFlashlightZone() const {
    return false;
}

ERsZiplineMovementDirection ASwAIBuddyDroid::GetZiplineMoveDirection() const {
    return ERsZiplineMovementDirection::Descending;
}

ESwAIBuddyDroidMoveMode ASwAIBuddyDroid::GetPreferredMoveMode() const {
    return ESwAIBuddyDroidMoveMode::None;
}

ESwAIBuddyAttachPoint ASwAIBuddyDroid::GetCurrentAttachPoint() const {
    return ESwAIBuddyAttachPoint::Detached;
}

ESwAIBuddyAttachPoint ASwAIBuddyDroid::GetClosestAttachPoint(const FVector& Location, float& OutDistance) const {
    return ESwAIBuddyAttachPoint::Detached;
}

ESwAIBuddyState ASwAIBuddyDroid::GetBuddyState() const {
    return ESwAIBuddyState::Attached;
}

void ASwAIBuddyDroid::ForceDetachFromHero() {
}

void ASwAIBuddyDroid::ExitZipline() {
}

void ASwAIBuddyDroid::EnterZipline() {
}

void ASwAIBuddyDroid::Dismount() {
}

void ASwAIBuddyDroid::ClearOverrideDetachOffset() {
}

void ASwAIBuddyDroid::CheckOverlappingWithHero() {
}

void ASwAIBuddyDroid::AttachToHeroPoint() {
}

void ASwAIBuddyDroid::AttachToHero(bool bSetNewAttachPoint, ESwAIBuddyAttachPoint NewAttachPoint) {
}

ASwAIBuddyDroid::ASwAIBuddyDroid() {
    this->AttachLerpTotalTime = 0.50f;
    this->DetachLerpTotalTime = 0.00f;
    this->LowProfileSocketWeight = 50.00f;
    this->PhysicalAnimationProfileIdleDefault = NULL;
    this->bForceDisableBackpackIK = false;
}

