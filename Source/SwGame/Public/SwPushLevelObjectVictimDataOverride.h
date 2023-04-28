#pragma once
#include "CoreMinimal.h"
#include "SwPushLevelObjectVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPushLevelObjectVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePushSpeed;
    
    SWGAME_API FSwPushLevelObjectVictimDataOverride();
};

