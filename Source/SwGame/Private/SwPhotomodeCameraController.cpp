#include "SwPhotomodeCameraController.h"

void ASwPhotomodeCameraController::ToggleSpotlight() {
}

void ASwPhotomodeCameraController::TogglePhotomode() {
}

void ASwPhotomodeCameraController::SetCurrentlySelectedTweak(EPhotoModeTweaks NewSelectedTweak) {
}

void ASwPhotomodeCameraController::SelectTweak(int32 I) {
}

void ASwPhotomodeCameraController::ResetToDefault() {
}

void ASwPhotomodeCameraController::RequestScreenshotPC(bool bShowSlateUI) {
}



void ASwPhotomodeCameraController::PhotomodeSetVignette(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetTilt(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetFOV(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetFilterIntensity(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetFilter(int32 Index) {
}

void ASwPhotomodeCameraController::PhotomodeSetFilmGrain(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetExposure(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetDOFFStop(float Value) {
}

void ASwPhotomodeCameraController::PhotomodeSetDOFDistance(float Value, bool bShowFocalPlane) {
}

void ASwPhotomodeCameraController::PhotomodeSetChromaticAberation(float Value) {
}




float ASwPhotomodeCameraController::PhotomodeGetVignette() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetTilt() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetFOV() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetFilterIntensity() {
    return 0.0f;
}

int32 ASwPhotomodeCameraController::PhotomodeGetFilter() {
    return 0;
}

float ASwPhotomodeCameraController::PhotomodeGetFilmGrain() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetExposure() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetDOFFStop() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetDOFDistance() {
    return 0.0f;
}

float ASwPhotomodeCameraController::PhotomodeGetChromaticAberation() {
    return 0.0f;
}

void ASwPhotomodeCameraController::ModifyTweakValue(float Delta) {
}

bool ASwPhotomodeCameraController::IsSpotlightVisible() const {
    return false;
}

bool ASwPhotomodeCameraController::IsSelected(EPhotoModeTweaks TweakID) const {
    return false;
}

bool ASwPhotomodeCameraController::IsMenuHidden() const {
    return false;
}

void ASwPhotomodeCameraController::HidePhotomodeUI() {
}

FText ASwPhotomodeCameraController::GetTextValue(EPhotoModeTweaks TweakID) const {
    return FText::GetEmpty();
}

float ASwPhotomodeCameraController::GetSliderValue(EPhotoModeTweaks TweakID) const {
    return 0.0f;
}

USpotLightComponent* ASwPhotomodeCameraController::GetPhotomodeLight(int32 Index) {
    return NULL;
}

ASwPhotomodeCameraController::ASwPhotomodeCameraController() {
    // Null default object.
}

