#pragma once
#include "CoreMinimal.h"
#include "RsAbilityPriorityWeights.generated.h"

USTRUCT(BlueprintType)
struct FRsAbilityPriorityWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplicativeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveWeight;
    
    SWGAME_API FRsAbilityPriorityWeights();
};

