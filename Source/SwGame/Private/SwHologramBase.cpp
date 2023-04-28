#include "SwHologramBase.h"

void ASwHologramBase::SetCameraFOV(float FOV) {
}


bool ASwHologramBase::HologramActive() const {
    return false;
}


UMaterialInstanceDynamic* ASwHologramBase::GetHologramMaterial() const {
    return NULL;
}

float ASwHologramBase::GetActiveRampValue() const {
    return 0.0f;
}

void ASwHologramBase::DeactivateHologram() {
}

void ASwHologramBase::ActivateHologram() {
}

ASwHologramBase::ASwHologramBase() {
    // Null default object.
}

