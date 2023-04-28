#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwLiftStaggerCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftStaggerCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPutInCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ForwardAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData BackAnimation;
    
    SWGAME_API FSwLiftStaggerCharacterData();
};

