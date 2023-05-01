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
    this->TargetRotationAlfaTime = 0.75f;
    this->bRotationInLocalSpace = false;
    this->bReturnToThrower = true;
    this->bThrowFixedDistance = false;
    this->CatchDistance = 250.00f;
    this->DefaultThrowDistance = 1000.00f;
    this->ArcAmount = 0.70f;
    this->HomingDuration = 1.00f;
    this->DamageType = NULL;
    this->HitDebounceTime = 0.30f;
    this->bIsFlyingBack = false;
}

