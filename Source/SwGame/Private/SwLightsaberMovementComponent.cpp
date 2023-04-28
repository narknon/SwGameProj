#include "SwLightsaberMovementComponent.h"

void USwLightsaberMovementComponent::ThrowWithDuration(float InTimeToDestination) {
}

void USwLightsaberMovementComponent::ThrowAtSpeed(float Speed) {
}

void USwLightsaberMovementComponent::SetCollision(bool EnableCollision) {
}

void USwLightsaberMovementComponent::ReturnWithDuration(float Duration) {
}

void USwLightsaberMovementComponent::ReturnAtSpeed(float Speed) {
}

void USwLightsaberMovementComponent::OnAfterCatch() {
}

void USwLightsaberMovementComponent::InitSaberMovement(AActor* SaberOwner, UPrimitiveComponent* Collision, FName AttackType) {
}

bool USwLightsaberMovementComponent::HasBroadcastedCatch() const {
    return false;
}

void USwLightsaberMovementComponent::FlyToWithDuration(AActor* InHomingTarget, const FVector& InTargetLocation, float InTimeToDestination, bool ReturnToThrower) {
}

void USwLightsaberMovementComponent::FlyToAtSpeed(AActor* InHomingTarget, const FVector& InTargetLocation, float Speed, bool ReturnToThrower) {
}

USwLightsaberMovementComponent::USwLightsaberMovementComponent() {
    // Null default object.
}

