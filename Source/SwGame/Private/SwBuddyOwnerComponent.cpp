#include "SwBuddyOwnerComponent.h"

void USwBuddyOwnerComponent::OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {
}

bool USwBuddyOwnerComponent::IsLocationValidToDetachBuddy() const {
    return false;
}

USwBuddyOwnerComponent::USwBuddyOwnerComponent() {
    this->OpennessQueryInterval = 2.00f;
    this->MinPointsForOpenness = 0;
}

