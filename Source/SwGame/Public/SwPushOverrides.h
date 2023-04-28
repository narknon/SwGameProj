#pragma once
#include "CoreMinimal.h"
#include "SwPushVictimDataOverride.h"
#include "SwVictimDataConditionalConfig.h"
#include "SwPushOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSwPushOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVictimDataConditionalConfig ConditionalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPushVictimDataOverride OverrideData;
    
    SWGAME_API FSwPushOverrides();
};

