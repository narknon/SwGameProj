#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwLiftCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData LiftEnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftHeightVariation;
    
    SWGAME_API FSwLiftCharacterData();
};

