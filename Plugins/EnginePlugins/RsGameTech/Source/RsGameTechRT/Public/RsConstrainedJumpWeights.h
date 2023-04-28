#pragma once
#include "CoreMinimal.h"
#include "ERsConstrainedJumpDirection.h"
#include "RsConstrainedJumpWeights.generated.h"

USTRUCT(BlueprintType)
struct FRsConstrainedJumpWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, float> JumpDirectionsAndWeights;
    
    RSGAMETECHRT_API FRsConstrainedJumpWeights();
};

