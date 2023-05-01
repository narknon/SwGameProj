#include "SwWorldMapComponent.h"

USwWorldMapComponent::USwWorldMapComponent() {
    this->HoverDuration = 0.35f;
    this->RsWorldMap = NULL;
    this->CameraActor = NULL;
    this->RuntimeSettings = NULL;
    this->HierarchyLevelType = ERsWorldMapLevelType::Count;
    this->bCanTransitionHeightOnElevationChange = true;
}

