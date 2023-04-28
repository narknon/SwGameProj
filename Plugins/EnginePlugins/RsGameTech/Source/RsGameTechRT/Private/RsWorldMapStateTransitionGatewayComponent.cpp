#include "RsWorldMapStateTransitionGatewayComponent.h"

FRsMapStateData URsWorldMapStateTransitionGatewayComponent::GetMapStateData() const {
    return FRsMapStateData{};
}

void URsWorldMapStateTransitionGatewayComponent::BroadcastSetTransform(const FTransform& Transform) {
}

void URsWorldMapStateTransitionGatewayComponent::BroadcastSetState(int32 State) {
}

URsWorldMapStateTransitionGatewayComponent::URsWorldMapStateTransitionGatewayComponent() {
    // Null default object.
}

