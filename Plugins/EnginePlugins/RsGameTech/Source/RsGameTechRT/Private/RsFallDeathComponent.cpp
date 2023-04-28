#include "RsFallDeathComponent.h"

bool URsFallDeathComponent::WillPassDeathDistance(FVector InLocation) {
    return false;
}

void URsFallDeathComponent::SetTrackingEnabled(bool bEnabled) {
}

void URsFallDeathComponent::SetOverWaterTrackingEnabled(bool bEnabled) {
}

void URsFallDeathComponent::SetLastContactZ(float ContactZ) {
}

void URsFallDeathComponent::OnTeleported() {
}

void URsFallDeathComponent::OnNavStateChanged(ERsNavState NewState, ERsNavState PrevState) {
}

void URsFallDeathComponent::OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void URsFallDeathComponent::KillCharacter_Implementation(ARsCharacter* CharacterToKill, AActor* DamageCauser) {
}

bool URsFallDeathComponent::GetTrackingEnabled() const {
    return false;
}

bool URsFallDeathComponent::GetOverWaterTrackingEnabled() const {
    return false;
}

bool URsFallDeathComponent::GetLastContactZ(float& ContactZ) const {
    return false;
}

void URsFallDeathComponent::ClearLastContactZ() {
}

void URsFallDeathComponent::ClearIsOverWater() {
}

URsFallDeathComponent::URsFallDeathComponent() {
    // Null default object.
}

