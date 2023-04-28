#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationTimeUpdateSchemeParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationTimeUpdateSchemeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseFixedFrameTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UsePrediction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFixedFrameTimeValue;
    
    FRsPhysicalAnimationTimeUpdateSchemeParameters();
};

