#include "SwSplineBasedSpaceshipInterfaceComponent.h"

void USwSplineBasedSpaceshipInterfaceComponent::TransferShipToNewSpline(ASwVehicleSplineActor* NewSplinePathActor, bool bInResetToCenterOfSpline) {
}

float USwSplineBasedSpaceshipInterfaceComponent::GetVerticalLinearVelocity() {
    return 0.0f;
}

FVector USwSplineBasedSpaceshipInterfaceComponent::GetShipLocationSplineSpace() {
    return FVector{};
}

float USwSplineBasedSpaceshipInterfaceComponent::GetHorizontalLinearVelocity() {
    return 0.0f;
}

FVector USwSplineBasedSpaceshipInterfaceComponent::GetCurrentSplineTranslation() {
    return FVector{};
}

float USwSplineBasedSpaceshipInterfaceComponent::GetCurrentSplineTime() {
    return 0.0f;
}

FRotator USwSplineBasedSpaceshipInterfaceComponent::GetCurrentSplineRotation() {
    return FRotator{};
}

USwSplineBasedSpaceshipInterfaceComponent::USwSplineBasedSpaceshipInterfaceComponent() {
    this->SplinePathActor = NULL;
    this->SplineStartPercentage = 0.00f;
    this->BaseSplineMovementSpeed = 15000.00f;
    this->BoostSpeed = 30000.00f;
    this->SlowDownSpeed = 5000.00f;
    this->InputStickDeadzone = 0.20f;
    this->InputCooldown = 1.00f;
    this->SplineSpaceshipHeroStateModifier = NULL;
    this->SplineSpaceshipCameraClass = NULL;
    this->SplineSpaceshipCamera = NULL;
    this->ProjectileType = NULL;
    this->SplinePathComponent = NULL;
    this->ProxyCrosshairRotationComponent = NULL;
}

