#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "RsExposureSettings.generated.h"

class UCurveFloat;
class UTexture;

USTRUCT(BlueprintType)
struct FRsExposureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureMethod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureLowPercent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureHighPercent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureMinBrightness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureMaxBrightness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureCalibrationConstant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureSpeedUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureSpeedDown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureBiasCurve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureMeterMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureApplyPhysicalCameraExposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_HistogramLogMin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_HistogramLogMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoExposureApplyPhysicalCameraExposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* AutoExposureMeterMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureHighPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HistogramLogMax;
    
    RSPOSTPROCESSRUNTIME_API FRsExposureSettings();
};

