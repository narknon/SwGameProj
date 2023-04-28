#include "SwBuddyOwnerComponent.h"

void USwBuddyOwnerComponent::OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {
}

bool USwBuddyOwnerComponent::IsLocationValidToDetachBuddy() const {
    return false;
}

USwBuddyOwnerComponent::USwBuddyOwnerComponent() {
    // Null default object.
}

