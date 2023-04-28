#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncDefinitionPrimaryTarget.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeSyncDefinitionPrimaryTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* HeroCharacterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* HeroSpeederBikeAnimation;
    
    FSwSpeederBikeSyncDefinitionPrimaryTarget();
};

