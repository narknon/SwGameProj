#include "SwSpaceshipDebugOptions.h"

FSwSpaceshipDebugOptions::FSwSpaceshipDebugOptions() {
    this->bDisableShipTranslation = false;
    this->bDisableShipRotation = false;
    this->bDisableRotationReset = false;
    this->bDisableShipAcceleration = false;
    this->bDisablePitchFloatingPointErrorHandling = false;
    this->bResetCurvesWithDirectionChange = false;
    this->bEnableOldCameraMode = false;
    this->bCameraFollowOnlyAlongSplineForOldCameraMode = false;
    this->bDisableCameraTranslation = false;
    this->bDisableCameraRotation = false;
}

