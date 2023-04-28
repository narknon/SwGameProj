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
    // Null default object.
}

