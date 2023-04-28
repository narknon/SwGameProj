#pragma once
#include "CoreMinimal.h"
#include "ESwPullVictimType.h"
#include "SwPullCharacterVictimDataOverride.h"
#include "SwVictimDataOverride.h"
#include "SwPullVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPullVictimDataOverride : public FSwVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverridePullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullVictimType PullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullCharacterVictimDataOverride CharacterOverrides;
    
    SWGAME_API FSwPullVictimDataOverride();
};

