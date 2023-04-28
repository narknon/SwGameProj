#include "RsPlayerController.h"

void ARsPlayerController::UpdateCurrentStartSpot(AActor* InStartSpot) {
}

void ARsPlayerController::UnlockCameraForInput() {
}

void ARsPlayerController::StopInputPlayback() {
}

void ARsPlayerController::SetUserControlSpaceMappingWithMode(const UObject* mappingOwner, const ERsControllerSpaceMode newControllerSpaceMode, const TEnumAsByte<EAxis::Type> axisMapX, const TEnumAsByte<EAxis::Type> axisMapY, const float axisFactorX, const float axisFactorY, const int32 snappingDivisions) {
}

void ARsPlayerController::SetUserControlSpaceMapping(const UObject* mappingOwner, const FQuat& newControllerSpace, const TEnumAsByte<EAxis::Type> axisMapX, const TEnumAsByte<EAxis::Type> axisMapY, const float axisFactorX, const float axisFactorY, const int32 snappingDivisions) {
}

void ARsPlayerController::SetLeftAnalogIntentTimeout(const float Timeout) {
}

void ARsPlayerController::SetControlSpaceMode(const ERsControllerSpaceMode newControllerSpaceMode) {
}

void ARsPlayerController::ResetControlSpaceMapping(const UObject* mappingOwner) {
}

bool ARsPlayerController::PlaybackInputRecording(const URsPlayerInputRecording* Recording, const TArray<FKey>& AutoCancelKeys) {
    return false;
}


void ARsPlayerController::LockCameraForInput(float MinimumPadIntensityForMaintainingCameraLock, float BlendOutTime) {
}

AActor* ARsPlayerController::GetPlayerStart() {
    return NULL;
}


ERsControllerSpaceMode ARsPlayerController::GetControlSpaceMode() const {
    return ERsControllerSpaceMode::CS_HORIZONTAL_CAMERA_YAW;
}

void ARsPlayerController::ClearLeftAnalogIntentTimeout() {
}

void ARsPlayerController::CallOnPauseMenuToggled(bool bPauseMenuOpened) {
}

ARsPlayerController::ARsPlayerController() {
    // Null default object.
}

