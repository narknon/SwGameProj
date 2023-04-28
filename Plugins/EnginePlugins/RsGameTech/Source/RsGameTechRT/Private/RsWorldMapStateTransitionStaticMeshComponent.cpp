#include "RsWorldMapStateTransitionStaticMeshComponent.h"

FRsMapStateData URsWorldMapStateTransitionStaticMeshComponent::GetMapStateData() const {
    return FRsMapStateData{};
}

void URsWorldMapStateTransitionStaticMeshComponent::BroadcastSetTransform(const FTransform& Transform) {
}

void URsWorldMapStateTransitionStaticMeshComponent::BroadcastSetState(int32 State) {
}

URsWorldMapStateTransitionStaticMeshComponent::URsWorldMapStateTransitionStaticMeshComponent() {
    // Null default object.
}

