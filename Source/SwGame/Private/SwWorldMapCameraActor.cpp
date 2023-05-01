#include "SwWorldMapCameraActor.h"

USwWorldMapCameraComponent* ASwWorldMapCameraActor::GetWorldMapCameraComponent() const {
    return NULL;
}

ASwWorldMapCameraActor::ASwWorldMapCameraActor() {
    this->CameraState = ESwWorldMapCameraState::None;
    this->TimeToTransitionHeightAfterElevationChange = 1.00f;
    this->RuntimeSettings = NULL;
}

