#pragma once
#include "CoreMinimal.h"
#include "ESwOverrideBooleanType.h"
#include "SwPullCharacterTractorVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPullCharacterTractorVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullBaseSpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwOverrideBooleanType ShouldUsePreciseConstraint;
    
    SWGAME_API FSwPullCharacterTractorVictimDataOverride();
};

