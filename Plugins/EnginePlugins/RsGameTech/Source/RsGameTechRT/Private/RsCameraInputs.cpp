#include "RsCameraInputs.h"

FRsCameraInputs::FRsCameraInputs() {
    this->DynamicFOVAngleOffset = 0.00f;
    this->DynamicOffsetTransitionTime = 0.00f;
    this->DefaultFOV = 0.00f;
    this->ViewTarget = NULL;
    this->FocusActor = NULL;
    this->LastFocusActorSetTime = 0.00f;
    this->CameraDefinition = NULL;
    this->CurrentTime = 0.00f;
    this->LastLookInputTime = 0.00f;
    this->LastMovementInputTime = 0.00f;
    this->bUseMovementInput = false;
    this->CameraManager = NULL;
    this->SplineCameraDefinition = NULL;
    this->SplineCameraAttachActor = NULL;
    this->SplineCameraInitMethod = SplineCameraInit_FromBeginning;
    this->DeltaTime = 0.00f;
    this->DynamicOffsetTransitionTimeRemaining = 0.00f;
    this->NavSurfaceZ = 0.00f;
    this->CameraZoom = 0.00f;
}

