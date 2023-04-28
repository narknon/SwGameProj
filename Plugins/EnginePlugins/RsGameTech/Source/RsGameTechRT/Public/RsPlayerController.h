#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "ERsControllerSpaceMode.h"
#include "RsOnInputIntentLostDelegate.h"
#include "RsOnInputPlaybackStoppedDelegate.h"
#include "RsOnPauseMenuToggledDelegateDelegate.h"
#include "RsPlayerController.generated.h"

class AActor;
class ARsAICharacter;
class UObject;
class URsPlayerCharacterDefinition;
class URsPlayerInputRecording;
class URsUiRoot;

UCLASS(Blueprintable)
class ARsPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_controllerMappingOwner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsAICharacter> BuddyDroidActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPlayerCharacterDefinition* PlayerCharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraLockMinimumPadIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraLockBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMovementInputForCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat InputCameraOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat TargetControllerSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat CurrentControllerSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsControllerSpaceMode ControllerSpaceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> ControllerSpaceAxisMapX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> ControllerSpaceAxisMapY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSpaceAxisFactorX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSpaceAxisFactorY;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 ControllerDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 ControllerDirectionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 UndampedControllerDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 UndampedControllerDirectionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 SnappedControllerDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 SnappedControllerDirectionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerAnalogDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConsumeLeftAnalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 RawCameraControllerDirection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnInputIntentLost OnInputIntentLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnInputPlaybackStopped OnInputPlaybackStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnPauseMenuToggledDelegate OnPauseMenuToggled;
    
    ARsPlayerController();
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentStartSpot(AActor* InStartSpot);
    
    UFUNCTION(BlueprintCallable)
    void UnlockCameraForInput();
    
    UFUNCTION(BlueprintCallable)
    void StopInputPlayback();
    
    UFUNCTION(BlueprintCallable)
    void SetUserControlSpaceMappingWithMode(const UObject* mappingOwner, const ERsControllerSpaceMode newControllerSpaceMode, const TEnumAsByte<EAxis::Type> axisMapX, const TEnumAsByte<EAxis::Type> axisMapY, const float axisFactorX, const float axisFactorY, const int32 snappingDivisions);
    
    UFUNCTION(BlueprintCallable)
    void SetUserControlSpaceMapping(const UObject* mappingOwner, const FQuat& newControllerSpace, const TEnumAsByte<EAxis::Type> axisMapX, const TEnumAsByte<EAxis::Type> axisMapY, const float axisFactorX, const float axisFactorY, const int32 snappingDivisions);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftAnalogIntentTimeout(const float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void SetControlSpaceMode(const ERsControllerSpaceMode newControllerSpaceMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetControlSpaceMapping(const UObject* mappingOwner);
    
    UFUNCTION(BlueprintCallable)
    bool PlaybackInputRecording(const URsPlayerInputRecording* Recording, const TArray<FKey>& AutoCancelKeys);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseChanged(bool bIsPaused);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockCameraForInput(float MinimumPadIntensityForMaintainingCameraLock, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    URsUiRoot* GetHudRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsControllerSpaceMode GetControlSpaceMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLeftAnalogIntentTimeout();
    
    UFUNCTION(BlueprintCallable)
    void CallOnPauseMenuToggled(bool bPauseMenuOpened);
    
};

