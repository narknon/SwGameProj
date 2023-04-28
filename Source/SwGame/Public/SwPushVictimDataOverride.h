#pragma once
#include "CoreMinimal.h"
#include "SwPushCharacterVictimDataOverride.h"
#include "SwPushLevelObjectVictimDataOverride.h"
#include "SwVictimDataOverride.h"
#include "SwPushVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPushVictimDataOverride : public FSwVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPushCharacterVictimDataOverride CharacterOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPushLevelObjectVictimDataOverride LevelObjectOverride;
    
    SWGAME_API FSwPushVictimDataOverride();
};

