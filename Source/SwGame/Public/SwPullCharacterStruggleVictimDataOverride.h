#pragma once
#include "CoreMinimal.h"
#include "SwPullCharacterStruggleVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPullCharacterStruggleVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleDuration;
    
    SWGAME_API FSwPullCharacterStruggleVictimDataOverride();
};

