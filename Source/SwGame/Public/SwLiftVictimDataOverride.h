#pragma once
#include "CoreMinimal.h"
#include "SwLiftCharacterVictimDataOverride.h"
#include "SwVictimDataOverride.h"
#include "SwLiftVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftVictimDataOverride : public FSwVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftCharacterVictimDataOverride CharacterOverrides;
    
    SWGAME_API FSwLiftVictimDataOverride();
};

