#pragma once
#include "CoreMinimal.h"
#include "ERsHeroCollisionTweaks.h"
#include "SwPullLevelObjectHeroCollisionData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullLevelObjectHeroCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetCollisionTweakForHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroCollisionTweaks CollisionTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionsBetweenHeroAndForcePulledObject;
    
    SWGAME_API FSwPullLevelObjectHeroCollisionData();
};

