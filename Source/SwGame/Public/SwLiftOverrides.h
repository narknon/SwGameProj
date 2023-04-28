#pragma once
#include "CoreMinimal.h"
#include "SwLiftVictimDataOverride.h"
#include "SwVictimDataConditionalConfig.h"
#include "SwLiftOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVictimDataConditionalConfig ConditionalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftVictimDataOverride OverrideData;
    
    SWGAME_API FSwLiftOverrides();
};

