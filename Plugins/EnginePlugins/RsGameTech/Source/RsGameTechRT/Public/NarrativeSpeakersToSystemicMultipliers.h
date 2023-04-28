#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NarrativeSystemicMultiplierSet.h"
#include "NarrativeSpeakersToSystemicMultipliers.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FNarrativeSpeakersToSystemicMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNarrativeSystemicMultiplierSet> SpeakersToSystemicMultipliers;
    
    FNarrativeSpeakersToSystemicMultipliers();
};

