#pragma once
#include "CoreMinimal.h"
#include "RsOrientationAtSpeed.h"
#include "RsOrientationAtSpeedParm.generated.h"

USTRUCT(BlueprintType)
struct FRsOrientationAtSpeedParm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOrientationAtSpeed Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOrientationAtSpeed Max;
    
    RSTECHRT_API FRsOrientationAtSpeedParm();
};

