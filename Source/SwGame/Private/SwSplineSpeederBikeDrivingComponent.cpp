#include "SwSplineSpeederBikeDrivingComponent.h"

void USwSplineSpeederBikeDrivingComponent::StopAutopilot() {
}

void USwSplineSpeederBikeDrivingComponent::StartAutopilot(const FSwSpeederBikeSyncHeroAutopilotParameters& autopilotParams) {
}

float USwSplineSpeederBikeDrivingComponent::GetMaxValueOfBoostMeter() const {
    return 0.0f;
}

float USwSplineSpeederBikeDrivingComponent::GetCurrentValueOfBoostMeter() const {
    return 0.0f;
}

float USwSplineSpeederBikeDrivingComponent::GetAnimStateSmoothedSteeringValue() const {
    return 0.0f;
}

bool USwSplineSpeederBikeDrivingComponent::GetAnimStateIsSpeedBoostActive() const {
    return false;
}

float USwSplineSpeederBikeDrivingComponent::GetAnimStateInputBasedSteeringValue() const {
    return 0.0f;
}

USwSplineSpeederBikeDrivingComponent::USwSplineSpeederBikeDrivingComponent() {
    // Null default object.
}

