#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwRetractCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwRetractCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData RetractLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData RetractLandAnimation;
    
    SWGAME_API FSwRetractCharacterData();
};

