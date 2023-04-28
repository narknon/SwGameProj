#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwPullCharacterTractorCounterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPullCharacterTractorCounterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride_PullEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullEnter;
    
    SWGAME_API FSwPullCharacterTractorCounterVictimDataOverride();
};

