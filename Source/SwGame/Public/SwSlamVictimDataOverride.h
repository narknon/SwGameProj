#pragma once
#include "CoreMinimal.h"
#include "SwSlamCharacterVictimDataOverride.h"
#include "SwVictimDataOverride.h"
#include "SwSlamVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwSlamVictimDataOverride : public FSwVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamCharacterVictimDataOverride CharacterOverrides;
    
    SWGAME_API FSwSlamVictimDataOverride();
};

