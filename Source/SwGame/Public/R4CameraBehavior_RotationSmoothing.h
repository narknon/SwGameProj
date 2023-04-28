#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCameraBehavior.h"
#include "RsCameraOutputs.h"
#include "R4CameraBehavior_RotationSmoothing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_RotationSmoothing : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothRotationOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoldDeltaIntoRotationOnEnd;
    
public:
    UR4CameraBehavior_RotationSmoothing();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTargetRotation(const FRsCameraOutputs& Outputs) const;
    
};

