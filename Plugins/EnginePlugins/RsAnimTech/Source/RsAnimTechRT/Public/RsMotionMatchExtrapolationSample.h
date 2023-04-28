#pragma once
#include "CoreMinimal.h"
#include "RsMotionMatchExtrapolationSample.generated.h"

USTRUCT(BlueprintType)
struct FRsMotionMatchExtrapolationSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    RSANIMTECHRT_API FRsMotionMatchExtrapolationSample();
};

