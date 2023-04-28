#pragma once
#include "CoreMinimal.h"
#include "ESwOverrideBooleanType.h"
#include "SwPushCharacterStaggerVictimDataOverride.h"
#include "SwPushCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPushCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePushDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePushTimeToDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwOverrideBooleanType ShouldForcePushStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwOverrideBooleanType ShouldGlancingHitsBeDirectHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideStaggerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPushCharacterStaggerVictimDataOverride StaggerData;
    
    SWGAME_API FSwPushCharacterVictimDataOverride();
};

