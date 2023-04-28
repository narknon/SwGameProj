#include "SWGameUserSettings.h"

bool USWGameUserSettings::WasLastLoadCorrupt() const {
    return false;
}

void USWGameUserSettings::SetSeparateTranslucencyEnabled(bool bIsEnabled) {
}

void USWGameUserSettings::SetSafeZoneScale(float Scale) {
}

void USWGameUserSettings::SetRayTracingEnabled(bool NewValue) {
}

void USWGameUserSettings::SetPhotomodeButtonEnabled(bool bNewValue) {
}

void USWGameUserSettings::SetPerformanceModeEnabled(bool bNewValue) {
}

void USWGameUserSettings::SetMotionBlurEnabled(bool bNewValue) {
}

void USWGameUserSettings::SetHUDScalingMultiplier(const float HUDScalingMultiplier) {
}

void USWGameUserSettings::SetHolomapColorPalette(EHolomapPalettes Category, const FName& PaletteName, bool bIsDefault) {
}

void USWGameUserSettings::SetHighContrastColorSetting(EHighContrastColorProfileType ColorType, const FColor& NewColor) {
}

void USWGameUserSettings::SetHDRMaxLuminance(float NewValue) {
}

void USWGameUserSettings::SetHDRBrightness(float NewValue) {
}

void USWGameUserSettings::SetHDRBlackLevel(float NewValue) {
}

void USWGameUserSettings::SetGammaValue(float NewValue) {
}

void USWGameUserSettings::SetFilmGrainEnabled(bool bNewValue) {
}

void USWGameUserSettings::SetFFXFSRQuality(int32 NewValue) {
}

void USWGameUserSettings::SetCustomUserSettings_String(FName SettingsName, const FString& Data) {
}

void USWGameUserSettings::SetCustomUserSettings_Int(FName SettingsName, int32 Data) {
}

void USWGameUserSettings::SetCustomUserSettings_Float(FName SettingsName, float Data) {
}

void USWGameUserSettings::SetCustomUserSettings_Bool(FName SettingsName, bool Data) {
}

void USWGameUserSettings::SetCustomColorProfileEnabled(bool bValue) {
}

void USWGameUserSettings::SetControllerRumbleMultiplier(const float ControllerRumbleMultiplier) {
}

void USWGameUserSettings::SetControllerRumble(const bool bIsEnabled) {
}

void USWGameUserSettings::SetColorProfileSetting(EColorProfileType ColorType, const FColor& NewColor, bool bIsDefault) {
}

void USWGameUserSettings::SetColorDeficiencyType(EColorVisionDeficiency NewColorDeficiencyType) {
}

void USWGameUserSettings::SetColorDeficiencySeverity(int32 NewColorDeficiencySeverity) {
}

void USWGameUserSettings::SetChromaticAberrationEnabled(bool bNewValue) {
}

void USWGameUserSettings::SetCameraThumbstickYawMultiplier(const float CameraThumbstickYawMultiplier) {
}

void USWGameUserSettings::SetCameraThumbstickPitchMultiplier(const float CameraThumbstickPitchMultiplier) {
}

void USWGameUserSettings::SetCameraShakeMultiplier(const float CameraShakeMultiplier) {
}

void USWGameUserSettings::SetCameraNoAutoAdjustWindowMultiplier(const float CameraNoAutoAdjustWindowMultiplier) {
}

void USWGameUserSettings::SetCameraMouseYawMultiplier(const float CameraMouseYawMultiplier) {
}

void USWGameUserSettings::SetCameraMousePitchMultiplier(const float CameraMousePitchMultiplier) {
}

void USWGameUserSettings::SetCameraFOVAdjustment(const float CameraFOVAdjustment) {
}

void USWGameUserSettings::SetCameraFollowLockPercent(const float CameraFollowLockPercent) {
}

void USWGameUserSettings::SetCameraFollowDistanceMultiplier(const float CameraFollowDistanceMultiplier) {
}

void USWGameUserSettings::SetCameraAdditiveAnimMultiplier(const float CameraAdditiveAnimMultiplier) {
}

void USWGameUserSettings::SetAutoTargetOnHit(bool bNewValue) {
}

void USWGameUserSettings::SetAutoSucceedButtonMashEnabled(bool bNewValue) {
}

void USWGameUserSettings::SetAccessibilityTimeDilationFactor(const float NewValue) {
}

void USWGameUserSettings::SetAccessibilitySlowModeEnabled(const bool bNewValue) {
}

void USWGameUserSettings::SetAccessibilitySlowModeCombatToggleEnabled(const bool bNewValue) {
}

void USWGameUserSettings::SetAccessibilityShortCutMenuEnabled(const bool bNewValue) {
}

void USWGameUserSettings::SetAccessibilityShortCutMenuButtonSetting(const EAccessibilityShortcutType NewValue, const EFaceButton Button) {
}

void USWGameUserSettings::SetAccessibilityHoldButtonToSucceedEnabled(bool bNewValue) {
}

void USWGameUserSettings::ResetAllActionMappings(TEnumAsByte<ESwInputGroup::Type> InputGroup) {
}

void USWGameUserSettings::ReplaceAxisMappings(FName AxisName, const TArray<FInputAxisKeyMapping>& NewMappings) {
}

void USWGameUserSettings::ReplaceActionMapping(FName ActionName, const TArray<FInputActionKeyMapping>& NewMappings) {
}

bool USWGameUserSettings::IsPhotomodeButtonEnabled() const {
    return false;
}

bool USWGameUserSettings::IsPerformanceModeEnabled() const {
    return false;
}

bool USWGameUserSettings::IsPerformanceModeAvailable() const {
    return false;
}

bool USWGameUserSettings::IsMotionBlurEnabled() const {
    return false;
}

bool USWGameUserSettings::IsHUDScalingEnabled() const {
    return false;
}

bool USWGameUserSettings::IsGammaDirty() const {
    return false;
}

bool USWGameUserSettings::IsFilmGrainEnabled() const {
    return false;
}

bool USWGameUserSettings::IsEULAAccepted() const {
    return false;
}

bool USWGameUserSettings::IsControllerRumbleEnabled() const {
    return false;
}

bool USWGameUserSettings::IsChromaticAberrationEnabled() const {
    return false;
}

bool USWGameUserSettings::IsAutoTargetOnHitEnabled() const {
    return false;
}

bool USWGameUserSettings::IsAutoSucceedButtonMashEnabled() const {
    return false;
}

bool USWGameUserSettings::IsAccessibilitySlowModeEnabled() const {
    return false;
}

bool USWGameUserSettings::IsAccessibilitySlowModeCombatToggleEnabled() const {
    return false;
}

bool USWGameUserSettings::IsAccessibilityShortCutMenuEnabled() const {
    return false;
}

bool USWGameUserSettings::IsAccessibilityHoldButtonToSucceedEnabled() const {
    return false;
}

void USWGameUserSettings::HandleRayTracingToggled(bool bShowDialog) {
}

USWGameUserSettings* USWGameUserSettings::GetSWGameUserSettings() {
    return NULL;
}

float USWGameUserSettings::GetSafeZoneScale() const {
    return 0.0f;
}

bool USWGameUserSettings::GetRayTracingEnabled() const {
    return false;
}

float USWGameUserSettings::GetHUDScalingMultiplier() const {
    return 0.0f;
}

FName USWGameUserSettings::GetHolomapColorPalette(EHolomapPalettes Category) const {
    return NAME_None;
}

FColor USWGameUserSettings::GetHighContrastColorSetting(EHighContrastColorProfileType ColorType) const {
    return FColor{};
}

float USWGameUserSettings::GetHDRMaxLuminance() const {
    return 0.0f;
}

float USWGameUserSettings::GetHDRBrightness() const {
    return 0.0f;
}

float USWGameUserSettings::GetHDRBlackLevel() const {
    return 0.0f;
}

float USWGameUserSettings::GetGamma() const {
    return 0.0f;
}

int32 USWGameUserSettings::GetFFXFSRQuality() const {
    return 0;
}

bool USWGameUserSettings::GetDefaultSettings_String(FName SettingsName, FString& OutData) {
    return false;
}

bool USWGameUserSettings::GetDefaultSettings_Int(FName SettingsName, int32& OutData) {
    return false;
}

bool USWGameUserSettings::GetDefaultSettings_Float(FName SettingsName, float& OutData) {
    return false;
}

bool USWGameUserSettings::GetDefaultSettings_Bool(FName SettingsName, bool& OutData) {
    return false;
}

float USWGameUserSettings::GetDefaultMaxLuminance() const {
    return 0.0f;
}

float USWGameUserSettings::GetDefaultHUDScalingMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetDefaultHDRBrightness() const {
    return 0.0f;
}

float USWGameUserSettings::GetDefaultHDRBlackLevel() const {
    return 0.0f;
}

float USWGameUserSettings::GetDefaultGamma() const {
    return 0.0f;
}

bool USWGameUserSettings::GetCustomUserSettings_String(FName SettingsName, FString& OutData) {
    return false;
}

bool USWGameUserSettings::GetCustomUserSettings_Int(FName SettingsName, int32& OutData) {
    return false;
}

bool USWGameUserSettings::GetCustomUserSettings_Float(FName SettingsName, float& OutData) {
    return false;
}

bool USWGameUserSettings::GetCustomUserSettings_Bool(FName SettingsName, bool& OutData) {
    return false;
}

bool USWGameUserSettings::GetCustomColorProfileEnabled() const {
    return false;
}

float USWGameUserSettings::GetControllerRumbleMultiplier() const {
    return 0.0f;
}

FColor USWGameUserSettings::GetColorProfileSetting(EColorProfileType ColorType) const {
    return FColor{};
}

EColorVisionDeficiency USWGameUserSettings::GetColorDeficiencyType() const {
    return EColorVisionDeficiency::NormalVision;
}

int32 USWGameUserSettings::GetColorDeficiencySeverity() const {
    return 0;
}

float USWGameUserSettings::GetCameraThumbstickYawMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraThumbstickPitchMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraShakeMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraNoAutoAdjustWindowMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraMouseYawMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraMousePitchMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraFOVAdjustment() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraFollowLockPercent() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraFollowDistanceMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetCameraAdditiveAnimMultiplier() const {
    return 0.0f;
}

float USWGameUserSettings::GetAccessibilityTimeDilationFactor() const {
    return 0.0f;
}

EAccessibilityShortcutType USWGameUserSettings::GetAccessibilityShortCutMenuButtonSetting(const EFaceButton Button) {
    return EAccessibilityShortcutType::PhotoMode;
}

void USWGameUserSettings::ClearLastLoadCorrupt() {
}

void USWGameUserSettings::ApplyMappings() {
}

void USWGameUserSettings::AcceptEULA(const UObject* WorldContextObject) {
}

USWGameUserSettings::USWGameUserSettings() {
    // Null default object.
}

