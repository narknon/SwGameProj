#pragma once
#include "CoreMinimal.h"
#include "NarrativeSystemicMultiplierSet.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FNarrativeSystemicMultiplierSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceMultiplier;
    
    FNarrativeSystemicMultiplierSet();
};

