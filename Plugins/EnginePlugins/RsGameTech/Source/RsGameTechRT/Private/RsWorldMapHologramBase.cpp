#include "RsWorldMapHologramBase.h"

void ARsWorldMapHologramBase::UpdateMapLocation(const FVector& InLocation, const FRotator& InRotation) {
}

FVector ARsWorldMapHologramBase::TransformWorldPositionToMapPosition(const FVector& InPositionWorldSpace) const {
    return FVector{};
}

FVector ARsWorldMapHologramBase::TransformMapPositionToWorldPosition(const FVector& InPositionMapSpace) const {
    return FVector{};
}

void ARsWorldMapHologramBase::ToggleVisibility(bool bVisibile) {
}

void ARsWorldMapHologramBase::SetHolomapMode(ERsHolomapMode InHolomapMode) {
}

void ARsWorldMapHologramBase::SetHolomapCenterLocation(const FVector& InHolomapCenter) {
}

bool ARsWorldMapHologramBase::ProjectWorldMapToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative) const {
    return false;
}

bool ARsWorldMapHologramBase::IsWorldMapOpen() const {
    return false;
}

UDataAsset* ARsWorldMapHologramBase::GetRuntimeSettings() const {
    return NULL;
}

float ARsWorldMapHologramBase::GetRelativePlanetScale() const {
    return 0.0f;
}

float ARsWorldMapHologramBase::GetHolomapYawRotation() const {
    return 0.0f;
}

FVector ARsWorldMapHologramBase::GetHolomapScale() const {
    return FVector{};
}

ERsHolomapMode ARsWorldMapHologramBase::GetHolomapMode() {
    return ERsHolomapMode::Roaming;
}

FVector ARsWorldMapHologramBase::GetHolomapCoordiantes() const {
    return FVector{};
}

FVector ARsWorldMapHologramBase::GetHolomapCenterLocation() const {
    return FVector{};
}

uint8 ARsWorldMapHologramBase::GetActiveInteriorLevel() const {
    return 0;
}

void ARsWorldMapHologramBase::EnableLockStepTranslationMode(bool bEnabled) {
}

ARsWorldMapHologramBase::ARsWorldMapHologramBase() {
    // Null default object.
}

