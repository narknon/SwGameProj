#pragma once
#include "CoreMinimal.h"
#include "RsNuMagnitude.h"
#include "RsAccelerationAtSpeedParm.generated.h"

USTRUCT(BlueprintType)
struct FRsAccelerationAtSpeedParm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNuMagnitude Acceleration;
    
    RSTECHRT_API FRsAccelerationAtSpeedParm();
};

