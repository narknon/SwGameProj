#include "RsWorldMapHologramSettingsBase.h"

FLinearColor URsWorldMapHologramSettingsBase::GetUnlockedDoorColor() const {
    return FLinearColor{};
}

FLinearColor URsWorldMapHologramSettingsBase::GetUnlockableDoorColor() const {
    return FLinearColor{};
}

FLinearColor URsWorldMapHologramSettingsBase::GetLockedDoorColor() const {
    return FLinearColor{};
}

FLinearColor URsWorldMapHologramSettingsBase::GetGatewayColor() const {
    return FLinearColor{};
}

URsWorldMapHologramSettingsBase::URsWorldMapHologramSettingsBase() {
    // Null default object.
}

