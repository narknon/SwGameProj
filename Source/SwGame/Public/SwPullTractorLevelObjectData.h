#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESwPullAmbientRotationType.h"
#include "SwPullLevelObjectHeroCollisionData.h"
#include "SwPullTractorCommonData.h"
#include "SwPullTractorLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullTractorLevelObjectData : public FSwPullTractorCommonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSkipJiggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JiggleScaleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullLevelObjectHeroCollisionData HeroCollisionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RsDominanceGroupOverrideWhenPulled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullAmbientRotationType AmbientRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHaveAutoBoundsOffsetForSingleTractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagToAddToInstigator;
    
    SWGAME_API FSwPullTractorLevelObjectData();
};

