#pragma once
#include "CoreMinimal.h"
#include "RsAIAllyEvaluatorWeights_Default.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIAllyEvaluatorWeights_Default {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Proximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TheirStrength;
    
    FRsAIAllyEvaluatorWeights_Default();
};

