#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_OffsetSmoothCSZoom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_OffsetSmoothCSZoom : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CSZoomMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CSZoomMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ZoomCurve;
    
public:
    UR4CameraBehavior_OffsetSmoothCSZoom();
};

