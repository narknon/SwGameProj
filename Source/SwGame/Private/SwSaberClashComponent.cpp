#include "SwSaberClashComponent.h"

void USwSaberClashComponent::OnFinishClashButtonPressed(FName ActionName, TEnumAsByte<EInputEvent> EventType, UObject* Handler) {
}

void USwSaberClashComponent::OnButtonMashPressed() {
}

void USwSaberClashComponent::OnButtonMashEnd() {
}

bool USwSaberClashComponent::IsClashing() const {
    return false;
}

bool USwSaberClashComponent::IsActionClashing(FName ActionName) const {
    return false;
}

FVector USwSaberClashComponent::GetCurrentIndicatorWorld(FVector SaberStart, FVector SaberEnd) const {
    return FVector{};
}

float USwSaberClashComponent::GetCurrentIndicatorLocal() const {
    return 0.0f;
}

FVector2D USwSaberClashComponent::GetApprovableClashRange() const {
    return FVector2D{};
}

void USwSaberClashComponent::EndClash() {
}

USwSaberClashComponent::USwSaberClashComponent() {
}

