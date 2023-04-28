#pragma once
#include "CoreMinimal.h"
#include "SwPullVictimDataOverride.h"
#include "SwVictimDataConditionalConfig.h"
#include "SwPullOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSwPullOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVictimDataConditionalConfig ConditionalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullVictimDataOverride OverrideData;
    
    SWGAME_API FSwPullOverrides();
};

