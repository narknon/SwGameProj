#include "RsCameraManager.h"

void ARsCameraManager::SetVTRUMOverride(TEnumAsByte<EVTRotationUpdateMethod> InVTRUM) {
}

void ARsCameraManager::SetViewTargetClampedRotationData(const FRsViewTargetClampedRotationData& InViewTargetClampedRotationData) {
}

void ARsCameraManager::SetRotationHingeSpeedFactor(float Pitch, float Yaw) {
}

void ARsCameraManager::SetRotationHingeFlag(ERsCameraRotationHingeFlags InRotationHingeFlag) {
}

void ARsCameraManager::SetPOIData(const FRsCameraPOI& InPOIData) {
}

void ARsCameraManager::SetInputScale(float InInputScale) {
}

void ARsCameraManager::SetCinematicBlendData(const FRsCameraCinematicBlend& InCinematicBlendData) {
}

void ARsCameraManager::SetCameraTeleportEnabled(bool bEnable) {
}

void ARsCameraManager::SetCameraRigOverride(USkeletalMeshComponent* InCameraRigOverride) {
}

void ARsCameraManager::SetCameraAnimLayerData(const FRsCameraAnimLayerData& InCameraAnimLayerData) {
}

void ARsCameraManager::SetAutoDepthOfFieldTarget(AActor* Actor, FName BoneName) {
}

void ARsCameraManager::RequestCSZoom() {
}

void ARsCameraManager::OnViewTargetTeleported(ARsCharacter* Character) {
}

bool ARsCameraManager::IsViewTargetClampedRotationDataValid() const {
    return false;
}

bool ARsCameraManager::IsPointInViewFrustum(const FVector& Point, const float FarPlaneDist) const {
    return false;
}

bool ARsCameraManager::IsPOIDataValid() const {
    return false;
}

bool ARsCameraManager::IsInModeTransition() const {
    return false;
}

bool ARsCameraManager::IsCinematicBlendDataValid() const {
    return false;
}

bool ARsCameraManager::IsCameraAnimLayerDataValid() const {
    return false;
}

bool ARsCameraManager::GetWorldMapViewInfo(FMinimalViewInfo& OutViewInfo) {
    return false;
}

TEnumAsByte<EVTRotationUpdateMethod> ARsCameraManager::GetVTRUMOverride() const {
    return VTRUM_MoveInputDirection;
}

FRsViewTargetClampedRotationData ARsCameraManager::GetViewTargetClampedRotationData() const {
    return FRsViewTargetClampedRotationData{};
}

TArray<FVector> ARsCameraManager::GetViewLocationsRenderedLastFrame() const {
    return TArray<FVector>();
}

void ARsCameraManager::GetRotationHingeSpeedFactor(float& OutPitch, float& OutYaw) const {
}

ERsCameraRotationHingeFlags ARsCameraManager::GetRotationHingeFlags() const {
    return ERsCameraRotationHingeFlags::Enabled;
}

FRsCameraPOI ARsCameraManager::GetPOIData() const {
    return FRsCameraPOI{};
}

float ARsCameraManager::GetInputScale() const {
    return 0.0f;
}

void ARsCameraManager::GetFOVAngles(float& OutHorizontalFOV, float& OutVerticalFOV) const {
}

FString ARsCameraManager::GetDebugText() const {
    return TEXT("");
}

float ARsCameraManager::GetCurrentAspectRatio() const {
    return 0.0f;
}

FRsCameraCinematicBlend ARsCameraManager::GetCinematicBlendData() const {
    return FRsCameraCinematicBlend{};
}

bool ARsCameraManager::GetCameraTeleportEnabled() const {
    return false;
}

USkeletalMeshComponent* ARsCameraManager::GetCameraRig() const {
    return NULL;
}

FRsCameraAnimLayerData ARsCameraManager::GetCameraAnimLayerData() const {
    return FRsCameraAnimLayerData{};
}

FString ARsCameraManager::GetActiveModeDebugText() const {
    return TEXT("");
}

FString ARsCameraManager::GetActiveBehaviorDebugText() const {
    return TEXT("");
}

URsCameraModeDefinition* ARsCameraManager::FindModeDefinition(FName ModeName) const {
    return NULL;
}

float ARsCameraManager::ConvertVerticalToHorizontalFOV(float VerticalFOV) const {
    return 0.0f;
}

float ARsCameraManager::ConvertHorizontalToVerticalFOV(float HorizontalFOV) const {
    return 0.0f;
}

void ARsCameraManager::ClearVTRUMOverride() {
}

void ARsCameraManager::ClearViewTargetClampedRotationData() {
}

void ARsCameraManager::ClearRotationHingeSpeedFactor() {
}

void ARsCameraManager::ClearRotationHingeFlag(ERsCameraRotationHingeFlags InRotationHingeFlag) {
}

void ARsCameraManager::ClearPOIData() {
}

void ARsCameraManager::ClearCinematicBlendData() {
}

void ARsCameraManager::ClearCameraRigOverride() {
}

void ARsCameraManager::ClearCameraAnimLayerData() {
}

void ARsCameraManager::ClearAutoDepthOfFieldTarget() {
}

ARsCameraManager::ARsCameraManager() {
    // Null default object.
}

