#include "SwMissileMovementComponent.h"

void USwMissileMovementComponent::StopHoming() {
}

void USwMissileMovementComponent::SetSpeed(float InSpeed) {
}

void USwMissileMovementComponent::SetMaxSpeed(float InMaxSpeed) {
}

void USwMissileMovementComponent::SetJerk(float InJerk) {
}

void USwMissileMovementComponent::SetHomingTarget(AActor* HomingTargetActor) {
}

void USwMissileMovementComponent::SetAcceleration(float InAcceleration) {
}

void USwMissileMovementComponent::NotifyEndForcePull() {
}

void USwMissileMovementComponent::NotifyBeginForcePull() {
}

bool USwMissileMovementComponent::IsInteruptedByTK() const {
    return false;
}

void USwMissileMovementComponent::InteruptByTK() {
}

float USwMissileMovementComponent::GetSpeed() const {
    return 0.0f;
}

float USwMissileMovementComponent::GetMissileMaxSpeed() const {
    return 0.0f;
}

float USwMissileMovementComponent::GetJerk() const {
    return 0.0f;
}

AActor* USwMissileMovementComponent::GetHomingTarget() const {
    return NULL;
}

float USwMissileMovementComponent::GetAcceleration() const {
    return 0.0f;
}

USwMissileMovementComponent::USwMissileMovementComponent() {
    // Null default object.
}

