#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraModeCompletionDelegate2Delegate.h"
#include "CameraModeCompletionDelegateDelegate.h"
#include "CameraModeUpdateDelegate2Delegate.h"
#include "CameraModeUpdateDelegateDelegate.h"
#include "ERsCameraRotationHingeFlags.h"
#include "EVTRotationUpdateMethod.h"
#include "RsCameraAnimLayerData.h"
#include "RsCameraCinematicBlend.h"
#include "RsCameraInputs.h"
#include "RsCameraModeStack.h"
#include "RsCameraOutputs.h"
#include "RsCameraPOI.h"
#include "RsCameraShakeInstance.h"
#include "RsFocusInputs.h"
#include "RsPostProcessEffectData.h"
#include "RsViewTargetClampedRotationData.h"
#include "RsCameraManager.generated.h"

class AActor;
class APawn;
class ARsCharacter;
class URsCameraManagerDefinition;
class URsCameraModeDefinition;
class URsCameraModeSetDefinition;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ARsCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefinitionPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraManagerDefinition* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsCameraModeSetDefinition*> CameraModeSetDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* DefaultCameraModeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* ActiveSplineCameraModeDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* ActiveCameraModeDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraInputs ModeInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraOutputs ModeOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraInputs PrevModeInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsFocusInputs> FocusInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsFocusInputs DefaultFocusInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraPOI POIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraCinematicBlend CinematicBlendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsViewTargetClampedRotationData ViewTargetClampedRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraAnimLayerData CameraAnimLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsCameraShakeInstance> ActiveShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPostProcessEffectData> ActivePostProcessEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PawnsToCollideWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraModeStack CameraModeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AutoDepthOfFieldTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoDepthOfFieldBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CameraRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CameraRigOverride;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraModeCompletionDelegate CameraModeCompletionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraModeCompletionDelegate2 CameraModeCompletionDelegate2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraModeUpdateDelegate CameraModeUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraModeUpdateDelegate2 CameraModeUpdateDelegate2;
    
    ARsCameraManager();
    UFUNCTION(BlueprintCallable)
    void SetVTRUMOverride(TEnumAsByte<EVTRotationUpdateMethod> InVTRUM);
    
    UFUNCTION(BlueprintCallable)
    void SetViewTargetClampedRotationData(const FRsViewTargetClampedRotationData& InViewTargetClampedRotationData);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationHingeSpeedFactor(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationHingeFlag(ERsCameraRotationHingeFlags InRotationHingeFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetPOIData(const FRsCameraPOI& InPOIData);
    
    UFUNCTION(BlueprintCallable)
    void SetInputScale(float InInputScale);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicBlendData(const FRsCameraCinematicBlend& InCinematicBlendData);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraTeleportEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraRigOverride(USkeletalMeshComponent* InCameraRigOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAnimLayerData(const FRsCameraAnimLayerData& InCameraAnimLayerData);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDepthOfFieldTarget(AActor* Actor, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void RequestCSZoom();
    
    UFUNCTION(BlueprintCallable)
    void OnViewTargetTeleported(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewTargetClampedRotationDataValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInViewFrustum(const FVector& Point, const float FarPlaneDist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPOIDataValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInModeTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicBlendDataValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraAnimLayerDataValid() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetWorldMapViewInfo(FMinimalViewInfo& OutViewInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EVTRotationUpdateMethod> GetVTRUMOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsViewTargetClampedRotationData GetViewTargetClampedRotationData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetViewLocationsRenderedLastFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRotationHingeSpeedFactor(float& OutPitch, float& OutYaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCameraRotationHingeFlags GetRotationHingeFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsCameraPOI GetPOIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFOVAngles(float& OutHorizontalFOV, float& OutVerticalFOV) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAspectRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsCameraCinematicBlend GetCinematicBlendData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCameraTeleportEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCameraRig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsCameraAnimLayerData GetCameraAnimLayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveModeDebugText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveBehaviorDebugText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsCameraModeDefinition* FindModeDefinition(FName ModeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvertVerticalToHorizontalFOV(float VerticalFOV) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvertHorizontalToVerticalFOV(float HorizontalFOV) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearVTRUMOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearViewTargetClampedRotationData();
    
    UFUNCTION(BlueprintCallable)
    void ClearRotationHingeSpeedFactor();
    
    UFUNCTION(BlueprintCallable)
    void ClearRotationHingeFlag(ERsCameraRotationHingeFlags InRotationHingeFlag);
    
    UFUNCTION(BlueprintCallable)
    void ClearPOIData();
    
    UFUNCTION(BlueprintCallable)
    void ClearCinematicBlendData();
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraRigOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraAnimLayerData();
    
    UFUNCTION(BlueprintCallable)
    void ClearAutoDepthOfFieldTarget();
    
};

