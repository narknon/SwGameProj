#pragma once
#include "CoreMinimal.h"
#include "RsAIAllyEvaluator.h"
#include "RsAIAllyEvaluatorWeights_Default.h"
#include "RsAIAllyEvaluator_Default.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsAIAllyEvaluator_Default : public URsAIAllyEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAllyEvaluatorWeights_Default AllyScoringWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerAllyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterAllyDistance;
    
    URsAIAllyEvaluator_Default();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShouldExcludeAlly(AActor* Ally, bool& bShouldExclude) const;
    
};

