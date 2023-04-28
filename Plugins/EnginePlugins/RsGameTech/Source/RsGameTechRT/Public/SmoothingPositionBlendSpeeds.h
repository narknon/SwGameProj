#pragma once
#include "CoreMinimal.h"
#include "SmoothingPositionBlendSpeeds.generated.h"

USTRUCT(BlueprintType)
struct FSmoothingPositionBlendSpeeds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleByDistanceToTarget;
    
    RSGAMETECHRT_API FSmoothingPositionBlendSpeeds();
};

