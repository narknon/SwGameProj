#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncDefinitionSecondaryTarget.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeSyncDefinitionSecondaryTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* OtherCharacterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* OtherSpeederBikeAnimation;
    
    FSwSpeederBikeSyncDefinitionSecondaryTarget();
};

