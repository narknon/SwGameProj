#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "R4CameraBehavior_LookInput.h"
#include "R4CameraBehavior_LookInputAdjustedByDistanceToFocus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_LookInputAdjustedByDistanceToFocus : public UR4CameraBehavior_LookInput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DistanceRotationSpeedCurveYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DistanceRotationSpeedCurvePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScale;
    
public:
    UR4CameraBehavior_LookInputAdjustedByDistanceToFocus();
};

