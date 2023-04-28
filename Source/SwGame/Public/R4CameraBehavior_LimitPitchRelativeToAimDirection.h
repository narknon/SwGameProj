#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "R4CameraBehavior_LimitPitch.h"
#include "R4CameraBehavior_LimitPitchRelativeToAimDirection.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_LimitPitchRelativeToAimDirection : public UR4CameraBehavior_LimitPitch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustMaxPitchRelativeToAimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustMinPitchRelativeToAimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PitchMaxCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PitchMinCurve;
    
public:
    UR4CameraBehavior_LimitPitchRelativeToAimDirection();
};

