#pragma once
#include "CoreMinimal.h"
#include "RsAIAwarenessEvaluator.h"
#include "RsAIThreatEvaluator.generated.h"

UCLASS(Blueprintable)
class URsAIThreatEvaluator : public URsAIAwarenessEvaluator {
    GENERATED_BODY()
public:
    URsAIThreatEvaluator();
};

