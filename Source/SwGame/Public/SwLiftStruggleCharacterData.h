#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwLiftStruggleCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftStruggleCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData EnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ExitAnimation;
    
    SWGAME_API FSwLiftStruggleCharacterData();
};

