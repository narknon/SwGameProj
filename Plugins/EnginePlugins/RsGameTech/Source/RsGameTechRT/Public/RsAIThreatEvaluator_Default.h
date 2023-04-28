#pragma once
#include "CoreMinimal.h"
#include "RsAIThreatEvaluator.h"
#include "RsAIThreatEvaluatorWeights_Default.h"
#include "RsAIThreatEvaluator_Default.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsAIThreatEvaluator_Default : public URsAIThreatEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIThreatEvaluatorWeights_Default ThreatScoringWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerThreatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterThreatDistance;
    
    URsAIThreatEvaluator_Default();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShouldExcludeThreat(AActor* Threat, bool& bShouldExclude) const;
    
};

