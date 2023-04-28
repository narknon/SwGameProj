#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "RsContinuousInterpParams.h"
#include "R4CameraBehavior_SpeederBikeSplineBlend.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_SpeederBikeSplineBlend : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsContinuousInterpParams RotationSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBlendPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendOnlyYaw;
    
public:
    UR4CameraBehavior_SpeederBikeSplineBlend();
};

