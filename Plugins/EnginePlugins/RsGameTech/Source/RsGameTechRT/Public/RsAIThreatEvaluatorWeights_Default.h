#pragma once
#include "CoreMinimal.h"
#include "RsAIThreatEvaluatorWeights_Default.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIThreatEvaluatorWeights_Default {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TheirAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Proximity;
    
    FRsAIThreatEvaluatorWeights_Default();
};

