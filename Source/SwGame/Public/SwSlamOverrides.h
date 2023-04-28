#pragma once
#include "CoreMinimal.h"
#include "SwSlamVictimDataOverride.h"
#include "SwVictimDataConditionalConfig.h"
#include "SwSlamOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVictimDataConditionalConfig ConditionalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamVictimDataOverride OverrideData;
    
    SWGAME_API FSwSlamOverrides();
};

