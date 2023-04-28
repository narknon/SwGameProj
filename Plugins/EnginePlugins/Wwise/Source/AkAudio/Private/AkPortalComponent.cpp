#include "AkPortalComponent.h"

bool UAkPortalComponent::PortalPlacementValid() const {
    return false;
}

void UAkPortalComponent::OpenPortal() {
}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const {
    return NULL;
}

AkAcousticPortalState UAkPortalComponent::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void UAkPortalComponent::ClosePortal() {
}

UAkPortalComponent::UAkPortalComponent() {
    // Null default object.
}

