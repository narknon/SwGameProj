#pragma once
#include "CoreMinimal.h"
#include "RsAIDistanceScoreRange.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIDistanceScoreRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterMultiplier;
    
    FRsAIDistanceScoreRange();
};

