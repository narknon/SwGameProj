#include "rsActor.h"
#include "Templates/SubclassOf.h"

void ArsActor::TeleportDirect(const FVector& DestLocation, const FRotator& DestRotation, const bool bStandingDestination, const bool bMaintainVelocity, const bool bMaintainAnimation, const bool bMaintainFrameOfReference) {
}

void ArsActor::SetInputDirectionMagnitude(float Magnitude) {
}

void ArsActor::SetInputDirectionLocal(const FVector2D localDir) {
}

void ArsActor::SetInputDirection(const FVector worldDir) {
}

void ArsActor::SetDefaultSkeletalAnimTickOption(EVisibilityBasedAnimTickOption TickOption) {
}

void ArsActor::SetBase(const ERsActorBase base) {
}

void ArsActor::SetAimDirection(const FVector worldDir, const float intent) {
}

void ArsActor::RemoveCollisionExclusionForActor(AActor* InOtherActor) {
}

bool ArsActor::PushSharedMotionParm(FName MotionParm) {
    return false;
}

bool ArsActor::PopSharedMotionParm(FName MotionParm) {
    return false;
}

void ArsActor::LerpTo(const FVector& Destination, float TimeToTarget) {
}

bool ArsActor::IsTopologyModeSet() const {
    return false;
}

bool ArsActor::IsOnGround() const {
    return false;
}

bool ArsActor::IsInSyncedAnimation() const {
    return false;
}

int32 ArsActor::GetSyncGroup() const {
    return 0;
}

URsActorSkeletalMeshComponent* ArsActor::GetRsMesh() const {
    return NULL;
}

float ArsActor::GetInputDirectionMagnitude() const {
    return 0.0f;
}

FVector ArsActor::GetInputDirection() const {
    return FVector{};
}

FVector ArsActor::GetFeetLocation() const {
    return FVector{};
}

FVector ArsActor::GetDefaultMeshRelativeLocation() const {
    return FVector{};
}

bool ArsActor::GetClampToGeometry() const {
    return false;
}

FVector ArsActor::GetAimDirection() const {
    return FVector{};
}

FVector ArsActor::GetActorLocationForGoalFeetLocation(const FVector& GoalFeetLocation) const {
    return FVector{};
}

bool ArsActor::ComputeIfNearGroundedNavmesh(const FVector& NavmeshQueryExtent, TSubclassOf<UNavigationQueryFilter> NavigationFilterClass) {
    return false;
}

bool ArsActor::ClampLocationToGroundAtNearestNavmeshPositionToGoal(const FVector& GoalLocation, TSubclassOf<UNavigationQueryFilter> NavigationFilterClass, const FVector& NavmeshQueryExtent, bool bAssertOnFailure, bool bSkipSweep, bool bSkipOverlapCheck, bool bReturnFootPositionInsteadOfActorPosition, bool bAlignOutPositionToNavmeshInsteadOfGround, FVector& OutClampedPosition) {
    return false;
}

void ArsActor::AddCollisionExclusionForActor(AActor* InOtherActor) {
}

ArsActor::ArsActor() {
}

