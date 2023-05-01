#include "R4PlayerController.h"
#include "SwPhotomodeCameraController.h"
#include "Templates/SubclassOf.h"

void AR4PlayerController::UpdatePostProcessEffect(const URsPostProcessSettingsDefinition* PostProcessDefinition, const FPostProcessSettings& UpdatedSettings) {
}

void AR4PlayerController::TogglePhotomode() {
}

void AR4PlayerController::StopCameraAnimMontage(UAnimMontage* AnimMontage) {
}

void AR4PlayerController::ShowButton_Implementation(FKey Button, bool Pulsing) {
}

void AR4PlayerController::ShowAction(FName Action, bool Pulsing) {
}

void AR4PlayerController::SetUseLatestSignedInUser(bool UseLatestSignedInUser) {
}

void AR4PlayerController::SetSpawnTransform(const FTransform& SpawnTrans) {
}

void AR4PlayerController::SetCameraShakeScale(TSubclassOf<UCameraShakeBase> Shake, float TargetScale, float ScaleSmoothTime) {
}

void AR4PlayerController::SetCameraRotation(FRotator CameraRotation, bool bRestartCameraMode, float OverrideBlendTimeOnRestart, bool bAllowNonzeroRoll, bool bResetLookInputTime, bool bDisableInputDuringBlend) {
}

void AR4PlayerController::SetCameraFocusLocation(FVector InFocusLocation) {
}

void AR4PlayerController::SetCameraFocusDirection(FVector InFocusDirection) {
}

void AR4PlayerController::SetCameraFocusActor2(AActor* InFocusActor, FName FocusSocket, bool bRestartCameraMode, float RestartBlendTimeOverride, const URsCameraModeDefinition* ForCameraMode) {
}

void AR4PlayerController::SetCameraFocusActor(AActor* InFocusActor, FName FocusSocket, bool bRestartCameraMode, float RestartBlendTimeOverride, FName ForCameraMode) {
}

void AR4PlayerController::SetCameraDynamicOffsetCS(FVector DynamicOffset, FRotator DynamicRotationOffset, float DynamicFOVAngleOffset, float OffsetTransitionTime) {
}

void AR4PlayerController::ResetPawnsToCollideWithCamera() {
}

void AR4PlayerController::RemovePostProcessEffect(const URsPostProcessSettingsDefinition* PostProcessDefinition, float TransitionOutTime) {
}

void AR4PlayerController::RemovePawnToCollideWithCamera(APawn* PawnToRemove) {
}

void AR4PlayerController::RemoveCameraModeSet(const URsCameraModeSetDefinition* ModeSetDefinition) {
}

void AR4PlayerController::RemoveAllPostProcessEffects() {
}

void AR4PlayerController::ReenableCameraAutoUpdateOfViewTargetRotation() {
}

float AR4PlayerController::PlayCameraAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bPlayAsChildOfHero) {
    return 0.0f;
}

void AR4PlayerController::PhotomodeRightButtonReleased() {
}

void AR4PlayerController::PhotomodeRightButtonPressed() {
}

void AR4PlayerController::PhotomodeLeftButtonReleased() {
}

void AR4PlayerController::PhotomodeLeftButtonPressed() {
}

void AR4PlayerController::OnPlayerDied(AActor* DeathActor) {
}

void AR4PlayerController::OnLoginChanged(int32 LocalUserNum) {
}

void AR4PlayerController::HideButton_Implementation() {
}

void AR4PlayerController::HideAction() {
}

ARsCameraManager* AR4PlayerController::GetUICameraManager() const {
    return NULL;
}

FTransform AR4PlayerController::GetSpawnTransform() {
    return FTransform{};
}

FKey AR4PlayerController::GetKeyForAction(FName Action) {
    return FKey{};
}

UAnimMontage* AR4PlayerController::GetCurrentCameraAnimMontage() {
    return NULL;
}

FVector AR4PlayerController::GetCameraFocusDirection() const {
    return FVector{};
}

AActor* AR4PlayerController::GetActiveSplineCameraOrigin() const {
    return NULL;
}

URsSplineCameraDefinition* AR4PlayerController::GetActiveSplineCameraDefinition() const {
    return NULL;
}

void AR4PlayerController::EndSplineCamera(const float OverrideBlendTime, URsSplineCameraDefinition* OptionalSplineCameraToEnd, bool bMaintainBlendOutTimeUntilFinished) {
}

void AR4PlayerController::DisableCameraAutoUpdateOfViewTargetRotation() {
}


void AR4PlayerController::DeactivateUICameraManager() {
}

void AR4PlayerController::ClearCameraFocusActor2(const URsCameraModeDefinition* ForCameraMode) {
}

void AR4PlayerController::ClearCameraFocusActor(FName ForCameraMode) {
}

bool AR4PlayerController::CanActivatePhotomode() const {
    return false;
}

void AR4PlayerController::CameraMode_Set2(const URsCameraModeDefinition* ModeDefinition, float BlendTimeOverride, int32 Priority) {
}

void AR4PlayerController::CameraMode_Set(FName ModeName, float BlendTimeOverride, int32 Priority) {
}

void AR4PlayerController::CameraMode_Restart(float BlendTimeOverride) {
}

void AR4PlayerController::CameraMode_Reset(float BlendTime) {
}

void AR4PlayerController::CameraMode_Push2(const URsCameraModeDefinition* ModeDefinition, float BlendTimeOverride, int32 Priority) {
}

void AR4PlayerController::CameraMode_Push(FName ModeName, float BlendTimeOverride, int32 Priority) {
}

void AR4PlayerController::CameraMode_Pop2(const URsCameraModeDefinition* ModeDefinition, float BlendTimeOverride) {
}

void AR4PlayerController::CameraMode_Pop(FName ModeName, float BlendTimeOverride) {
}

void AR4PlayerController::CameraMode_OverrideTransition(const FRsCameraModeTransitionData& Transition, float BlendTimeOverride, bool bTransitionWhilePaused) {
}

URsCameraModeDefinition* AR4PlayerController::CameraMode_Get2() const {
    return NULL;
}

FName AR4PlayerController::CameraMode_Get() {
    return NAME_None;
}







void AR4PlayerController::BeginSplineCamera2(URsSplineCameraDefinition* SplineCameraDefinition, const URsCameraModeDefinition* OverrideModeDefinition, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod) {
}

void AR4PlayerController::BeginSplineCamera(URsSplineCameraDefinition* SplineCameraDefinition, const FName OverrideModeName, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod) {
}

void AR4PlayerController::BeginAttachedSplineCamera2(ARsSplineCameraOrigin* SplineCameraOrigin, const URsCameraModeDefinition* OverrideModeDefinition, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod) {
}

void AR4PlayerController::BeginAttachedSplineCamera(ARsSplineCameraOrigin* SplineCameraOrigin, const FName OverrideModeName, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod) {
}

void AR4PlayerController::AddPostProcessEffect(const URsPostProcessSettingsDefinition* PostProcessDefinition, float BlendWeight, float TransitionInTime) {
}

void AR4PlayerController::AddPawnToCollideWithCamera(APawn* PawnToAdd) {
}

void AR4PlayerController::AddCameraModeSet(const URsCameraModeSetDefinition* ModeSetDefinition) {
}

void AR4PlayerController::ActivateUICameraManager() {
}

void AR4PlayerController::ActivatePhotomode() {
}

AR4PlayerController::AR4PlayerController() {
    this->HighlightManager = NULL;
    this->CameraZoomInput = 0.00f;
    this->BinocularsZoomInput = 0.00f;
    this->PostDeathWidgetClass = NULL;
    this->PhotoModeControllerClass = ASwPhotomodeCameraController::StaticClass();
    this->UICameraManager = NULL;
    this->GameplayCameraManager = NULL;
}

