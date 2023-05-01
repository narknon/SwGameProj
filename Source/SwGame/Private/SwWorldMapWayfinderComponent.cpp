#include "SwWorldMapWayfinderComponent.h"

USwWorldMapWayfinderComponent::USwWorldMapWayfinderComponent() {
    this->CurrentMode = ERsWayfinderMode::DoNothing;
    this->CurrentGoalMode = ERsWayfinderGoalFoundMode::NotFound;
}

