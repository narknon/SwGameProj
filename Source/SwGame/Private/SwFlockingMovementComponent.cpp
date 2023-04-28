#include "SwFlockingMovementComponent.h"

void USwFlockingMovementComponent::StopFlockingMovement(bool ClearPhysicsForces) {
}

void USwFlockingMovementComponent::SetFlockingMovementEnabled(const bool Enabled) {
}

void USwFlockingMovementComponent::InitFlockingMovement(const FFlockConfigData& NewFlockConfig, TArray<USwFlockingMovementComponent*> NewOtherFlockMembers, UStaticMeshComponent* PrimitiveComponent) {
}

FVector USwFlockingMovementComponent::GetMemberVelocity() {
    return FVector{};
}

void USwFlockingMovementComponent::GetMemberLocation(FVector& Output) {
}

bool USwFlockingMovementComponent::GetFlockingMovementEnabled() const {
    return false;
}


void USwFlockingMovementComponent::ClearCurrentPhysicsForces() {
}

void USwFlockingMovementComponent::BeginFlockingTowardsPosition(const FVector& NewTargetLocation) {
}

void USwFlockingMovementComponent::BeginFlockingTowardsActor(AActor* NewTargetActor) {
}

USwFlockingMovementComponent::USwFlockingMovementComponent() {
    // Null default object.
}

