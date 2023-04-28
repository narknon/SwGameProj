#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERsMotionSample.h"
#include "RsAIAnimInstanceSettings.generated.h"

UCLASS(Blueprintable)
class URsAIAnimInstanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultIsStoppingMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultIsMovingMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultLocalControllerYawMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultFallingDirectionMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultIsStoppingWalkRunMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultAngularVelocityYawMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultIsLeaningMotionSample;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsMotionSample> DefaultIsTurningWhileRunningV2MotionSample;
    
    URsAIAnimInstanceSettings();
};

