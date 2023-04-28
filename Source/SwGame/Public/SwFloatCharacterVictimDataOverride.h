#pragma once
#include "CoreMinimal.h"
#include "SwFloatCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwFloatCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideFloatDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatDuration;
    
    SWGAME_API FSwFloatCharacterVictimDataOverride();
};

