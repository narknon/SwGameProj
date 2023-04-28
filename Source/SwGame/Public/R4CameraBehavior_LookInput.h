#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "RsCameraInputs.h"
#include "R4CameraBehavior_LookInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_LookInput : public URsCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookInputScaleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookInputScalePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratedControllerInputScaleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleratedControllerInputScalePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookInputScaleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookInputScalePitch;
    
public:
    UR4CameraBehavior_LookInput();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcYawRotationDelta(const FRsCameraInputs& Inputs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcPitchRotationDelta(const FRsCameraInputs& Inputs) const;
    
};

