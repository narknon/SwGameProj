#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "ERsSplineCameraInitMethod.h"
#include "RsCameraModeTransitionData.h"
#include "RsPlayerController.h"
#include "RsOnPlayerLoginChangedDelegateDelegate.h"
#include "RsOnPlayerRespawnedEventDelegate.h"
#include "RsOnWidgetAddedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "R4PlayerController.generated.h"

class AActor;
class APawn;
class ARsCameraManager;
class ARsSplineCameraOrigin;
class ASwPhotomodeCameraController;
class UAnimMontage;
class UCameraShakeBase;
class UCheatManager;
class URsCameraModeDefinition;
class URsCameraModeSetDefinition;
class URsPostProcessSettingsDefinition;
class URsSplineCameraDefinition;
class URsUiWindow;
class USwHighlightManager;

UCLASS(Blueprintable)
class AR4PlayerController : public ARsPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwHighlightManager* HighlightManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnPlayerLoginChangedDelegate OnPlayerLoginChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnPlayerLoginChangedDelegate OnAnyPlayerLoginChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator MouseRotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraZoomInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BinocularsZoomInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsUiWindow> PostDeathWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnWidgetAddedEvent OnWidgetAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnPlayerRespawnedEvent OnPlayerResapwnedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwPhotomodeCameraController> PhotoModeControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCheatManager> SoftCheatClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsCameraManager* UICameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsCameraManager* GameplayCameraManager;
    
public:
    AR4PlayerController();
    UFUNCTION(BlueprintCallable)
    void UpdatePostProcessEffect(const URsPostProcessSettingsDefinition* PostProcessDefinition, const FPostProcessSettings& UpdatedSettings);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePhotomode();
    
    UFUNCTION(BlueprintCallable)
    void StopCameraAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowButton(FKey Button, bool Pulsing);
    
    UFUNCTION(BlueprintCallable)
    void ShowAction(FName Action, bool Pulsing);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLatestSignedInUser(bool UseLatestSignedInUser);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnTransform(const FTransform& SpawnTrans);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShakeScale(TSubclassOf<UCameraShakeBase> Shake, float TargetScale, float ScaleSmoothTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraRotation(FRotator CameraRotation, bool bRestartCameraMode, float OverrideBlendTimeOnRestart, bool bAllowNonzeroRoll, bool bResetLookInputTime, bool bDisableInputDuringBlend);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFocusLocation(FVector InFocusLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFocusDirection(FVector InFocusDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFocusActor2(AActor* InFocusActor, FName FocusSocket, bool bRestartCameraMode, float RestartBlendTimeOverride, const URsCameraModeDefinition* ForCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFocusActor(AActor* InFocusActor, FName FocusSocket, bool bRestartCameraMode, float RestartBlendTimeOverride, FName ForCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraDynamicOffsetCS(FVector DynamicOffset, FRotator DynamicRotationOffset, float DynamicFOVAngleOffset, float OffsetTransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetPawnsToCollideWithCamera();
    
    UFUNCTION(BlueprintCallable)
    void RemovePostProcessEffect(const URsPostProcessSettingsDefinition* PostProcessDefinition, float TransitionOutTime);
    
    UFUNCTION(BlueprintCallable)
    void RemovePawnToCollideWithCamera(APawn* PawnToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraModeSet(const URsCameraModeSetDefinition* ModeSetDefinition);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPostProcessEffects();
    
    UFUNCTION(BlueprintCallable)
    void ReenableCameraAutoUpdateOfViewTargetRotation();
    
    UFUNCTION(BlueprintCallable)
    float PlayCameraAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName, bool bPlayAsChildOfHero);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeRightButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeRightButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeLeftButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeLeftButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AActor* DeathActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoginChanged(int32 LocalUserNum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideButton();
    
    UFUNCTION(BlueprintCallable)
    void HideAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsCameraManager* GetUICameraManager() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSpawnTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyForAction(FName Action);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCurrentCameraAnimMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraFocusDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActiveSplineCameraOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsSplineCameraDefinition* GetActiveSplineCameraDefinition() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSplineCamera(const float OverrideBlendTime, URsSplineCameraDefinition* OptionalSplineCameraToEnd, bool bMaintainBlendOutTimeUntilFinished);
    
    UFUNCTION(BlueprintCallable)
    void DisableCameraAutoUpdateOfViewTargetRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugGoToGameMenu(FGameplayTag TargetURL);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateUICameraManager();
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraFocusActor2(const URsCameraModeDefinition* ForCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraFocusActor(FName ForCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivatePhotomode() const;
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Set2(const URsCameraModeDefinition* ModeDefinition, float BlendTimeOverride, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Set(FName ModeName, float BlendTimeOverride, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Restart(float BlendTimeOverride);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Reset(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Push2(const URsCameraModeDefinition* ModeDefinition, float BlendTimeOverride, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Push(FName ModeName, float BlendTimeOverride, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Pop2(const URsCameraModeDefinition* ModeDefinition, float BlendTimeOverride);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_Pop(FName ModeName, float BlendTimeOverride);
    
    UFUNCTION(BlueprintCallable)
    void CameraMode_OverrideTransition(const FRsCameraModeTransitionData& Transition, float BlendTimeOverride, bool bTransitionWhilePaused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsCameraModeDefinition* CameraMode_Get2() const;
    
    UFUNCTION(BlueprintCallable)
    FName CameraMode_Get();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonMashSucceed(FKey Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonMashStarted(FKey Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonMashFailed(FKey Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonMashEnded(FKey Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonMashButtonPressed(FKey Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonMashButtonHeld(FKey Button);
    
    UFUNCTION(BlueprintCallable)
    void BeginSplineCamera2(URsSplineCameraDefinition* SplineCameraDefinition, const URsCameraModeDefinition* OverrideModeDefinition, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod);
    
    UFUNCTION(BlueprintCallable)
    void BeginSplineCamera(URsSplineCameraDefinition* SplineCameraDefinition, const FName OverrideModeName, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod);
    
    UFUNCTION(BlueprintCallable)
    void BeginAttachedSplineCamera2(ARsSplineCameraOrigin* SplineCameraOrigin, const URsCameraModeDefinition* OverrideModeDefinition, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod);
    
    UFUNCTION(BlueprintCallable)
    void BeginAttachedSplineCamera(ARsSplineCameraOrigin* SplineCameraOrigin, const FName OverrideModeName, const float OverrideBlendTime, const TEnumAsByte<ERsSplineCameraInitMethod> InitializationMethod);
    
    UFUNCTION(BlueprintCallable)
    void AddPostProcessEffect(const URsPostProcessSettingsDefinition* PostProcessDefinition, float BlendWeight, float TransitionInTime);
    
    UFUNCTION(BlueprintCallable)
    void AddPawnToCollideWithCamera(APawn* PawnToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraModeSet(const URsCameraModeSetDefinition* ModeSetDefinition);
    
    UFUNCTION(BlueprintCallable)
    void ActivateUICameraManager();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePhotomode();
    
};

