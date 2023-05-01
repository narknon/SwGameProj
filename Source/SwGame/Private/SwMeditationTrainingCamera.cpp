#include "SwMeditationTrainingCamera.h"

void ASwMeditationTrainingCamera::SetCameraTransformGoal(FTransform NewGoal) {
}

ASwMeditationTrainingCamera::ASwMeditationTrainingCamera() {
    this->CameraFOV = 60.00f;
    this->CameraZoom = 1000.00f;
    this->CameraSmooth = 10.00f;
    this->CameraRotationSmooth = 10.00f;
    this->TrackedCursor = NULL;
    this->TrackedGrid = NULL;
    this->OriginalViewTarget = NULL;
    this->PlayerController = NULL;
}

