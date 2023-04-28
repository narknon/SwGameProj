#pragma once
#include "CoreMinimal.h"
#include "SwCollisionDamageVictimDataOverride.h"
#include "SwVictimDataConditionalConfig.h"
#include "SwCollisionDamageOverrides.generated.h"

USTRUCT(BlueprintType)
struct FSwCollisionDamageOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwVictimDataConditionalConfig ConditionalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwCollisionDamageVictimDataOverride OverrideData;
    
    SWGAME_API FSwCollisionDamageOverrides();
};

