#include "SwHeroVehicleDrivingComponent.h"

void USwHeroVehicleDrivingComponent::ShootLaserButtonReleased() {
}

void USwHeroVehicleDrivingComponent::ShootLaserButtonPushed() {
}

void USwHeroVehicleDrivingComponent::OnNavStateExited(ERsNavState NewState, ERsNavState PrevState) {
}

ESwVehicleState USwHeroVehicleDrivingComponent::GetCurrentState() const {
    return ESwVehicleState::None;
}

void USwHeroVehicleDrivingComponent::ExitVehicleButtonReleased() {
}

void USwHeroVehicleDrivingComponent::ExitVehicleButtonPushed() {
}

void USwHeroVehicleDrivingComponent::EnterVehicleButtonReleased() {
}

void USwHeroVehicleDrivingComponent::EnterVehicleButtonPushed() {
}

void USwHeroVehicleDrivingComponent::DrivingThrottleButtonReleased() {
}

void USwHeroVehicleDrivingComponent::DrivingThrottleButtonPushed() {
}

void USwHeroVehicleDrivingComponent::DrivingSpeedBoostButtonReleased() {
}

void USwHeroVehicleDrivingComponent::DrivingSpeedBoostButtonPushed() {
}

void USwHeroVehicleDrivingComponent::DrivingSlowDownButtonReleased() {
}

void USwHeroVehicleDrivingComponent::DrivingSlowDownButtonPushed() {
}

void USwHeroVehicleDrivingComponent::DrivingBrakeButtonReleased() {
}

void USwHeroVehicleDrivingComponent::DrivingBrakeButtonPushed() {
}

bool USwHeroVehicleDrivingComponent::CanPerformEnterVehicleAction(FName ActionName) const {
    return false;
}

USwHeroVehicleDrivingComponent::USwHeroVehicleDrivingComponent() {
    // Null default object.
}

