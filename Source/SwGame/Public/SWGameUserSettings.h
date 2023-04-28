#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "Rendering/RenderingCommon.h"
#include "EAccessibilityShortcutType.h"
#include "EColorProfileType.h"
#include "EFaceButton.h"
#include "EHighContrastColorProfileType.h"
#include "EHolomapPalettes.h"
#include "ESwInputGroup.h"
#include "OnRayTracingDialogToggledDelegate.h"
#include "SwOnGameUserSettingsReloadedDelegate.h"
#include "SWGameUserSettings.generated.h"

class UObject;
class USWGameUserSettings;
class USwGameUserSettingsSaveObject;

UCLASS(Blueprintable)
class SWGAME_API USWGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnGameUserSettingsReloaded OnGameUserSettingsReloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwGameUserSettingsSaveObject* SaveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwGameUserSettingsSaveObject* DefaultObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> OverridenDefaultKeybindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency DeficiencyType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeficiencySeverity;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRayTracingDialogToggled OnRayTracingToggled;
    
    USWGameUserSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLastLoadCorrupt() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSeparateTranslucencyEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeZoneScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTracingEnabled(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotomodeButtonEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPerformanceModeEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDScalingMultiplier(const float HUDScalingMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetHolomapColorPalette(EHolomapPalettes Category, const FName& PaletteName, bool bIsDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetHighContrastColorSetting(EHighContrastColorProfileType ColorType, const FColor& NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRMaxLuminance(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRBrightness(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHDRBlackLevel(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGammaValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmGrainEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFFXFSRQuality(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomUserSettings_String(FName SettingsName, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomUserSettings_Int(FName SettingsName, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomUserSettings_Float(FName SettingsName, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomUserSettings_Bool(FName SettingsName, bool Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomColorProfileEnabled(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerRumbleMultiplier(const float ControllerRumbleMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerRumble(const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetColorProfileSetting(EColorProfileType ColorType, const FColor& NewColor, bool bIsDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetColorDeficiencyType(EColorVisionDeficiency NewColorDeficiencyType);
    
    UFUNCTION(BlueprintCallable)
    void SetColorDeficiencySeverity(int32 NewColorDeficiencySeverity);
    
    UFUNCTION(BlueprintCallable)
    void SetChromaticAberrationEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraThumbstickYawMultiplier(const float CameraThumbstickYawMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraThumbstickPitchMultiplier(const float CameraThumbstickPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShakeMultiplier(const float CameraShakeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraNoAutoAdjustWindowMultiplier(const float CameraNoAutoAdjustWindowMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMouseYawMultiplier(const float CameraMouseYawMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMousePitchMultiplier(const float CameraMousePitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOVAdjustment(const float CameraFOVAdjustment);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFollowLockPercent(const float CameraFollowLockPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFollowDistanceMultiplier(const float CameraFollowDistanceMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAdditiveAnimMultiplier(const float CameraAdditiveAnimMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoTargetOnHit(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSucceedButtonMashEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessibilityTimeDilationFactor(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessibilitySlowModeEnabled(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessibilitySlowModeCombatToggleEnabled(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessibilityShortCutMenuEnabled(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessibilityShortCutMenuButtonSetting(const EAccessibilityShortcutType NewValue, const EFaceButton Button);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessibilityHoldButtonToSucceedEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActionMappings(TEnumAsByte<ESwInputGroup::Type> InputGroup);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceAxisMappings(FName AxisName, const TArray<FInputAxisKeyMapping>& NewMappings);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceActionMapping(FName ActionName, const TArray<FInputActionKeyMapping>& NewMappings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhotomodeButtonEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformanceModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformanceModeAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionBlurEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDScalingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGammaDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFilmGrainEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEULAAccepted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerRumbleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChromaticAberrationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoTargetOnHitEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoSucceedButtonMashEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessibilitySlowModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessibilitySlowModeCombatToggleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessibilityShortCutMenuEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessibilityHoldButtonToSucceedEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleRayTracingToggled(bool bShowDialog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USWGameUserSettings* GetSWGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSafeZoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRayTracingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDScalingMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHolomapColorPalette(EHolomapPalettes Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetHighContrastColorSetting(EHighContrastColorProfileType ColorType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRMaxLuminance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHDRBlackLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFFXFSRQuality() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultSettings_String(FName SettingsName, FString& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultSettings_Int(FName SettingsName, int32& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultSettings_Float(FName SettingsName, float& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultSettings_Bool(FName SettingsName, bool& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMaxLuminance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultHUDScalingMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultHDRBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultHDRBlackLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultGamma() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCustomUserSettings_String(FName SettingsName, FString& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCustomUserSettings_Int(FName SettingsName, int32& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCustomUserSettings_Float(FName SettingsName, float& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCustomUserSettings_Bool(FName SettingsName, bool& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomColorProfileEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerRumbleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetColorProfileSetting(EColorProfileType ColorType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EColorVisionDeficiency GetColorDeficiencyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorDeficiencySeverity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraThumbstickYawMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraThumbstickPitchMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraShakeMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraNoAutoAdjustWindowMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraMouseYawMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraMousePitchMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraFOVAdjustment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraFollowLockPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraFollowDistanceMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraAdditiveAnimMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccessibilityTimeDilationFactor() const;
    
    UFUNCTION(BlueprintCallable)
    EAccessibilityShortcutType GetAccessibilityShortCutMenuButtonSetting(const EFaceButton Button);
    
    UFUNCTION(BlueprintCallable)
    void ClearLastLoadCorrupt();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMappings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AcceptEULA(const UObject* WorldContextObject);
    
};

