#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_OffsetByPitchAngleToFocus.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_OffsetByPitchAngleToFocus : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CameraDepthCurve;
    
public:
    UR4CameraBehavior_OffsetByPitchAngleToFocus();
};

