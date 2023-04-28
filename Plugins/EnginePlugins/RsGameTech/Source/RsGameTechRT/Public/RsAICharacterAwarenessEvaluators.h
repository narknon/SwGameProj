#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsAICharacterAwarenessEvaluators.generated.h"

class URsAIAllyEvaluator;
class URsAITargetEvaluator;
class URsAIThreatEvaluator;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterAwarenessEvaluators {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIAllyEvaluator> AllyEvaluatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIThreatEvaluator> ThreatEvaluatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAITargetEvaluator> TargetEvaluatorClass;
    
    FRsAICharacterAwarenessEvaluators();
};

