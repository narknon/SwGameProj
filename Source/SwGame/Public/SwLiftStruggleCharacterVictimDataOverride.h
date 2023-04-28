#pragma once
#include "CoreMinimal.h"
#include "SwLiftStruggleCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftStruggleCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideLiftEnterStruggleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftEnterStruggleDuration;
    
    SWGAME_API FSwLiftStruggleCharacterVictimDataOverride();
};

