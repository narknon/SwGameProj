#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwFloatCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwFloatCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData FloatLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsCharacterAnimationData> FloatLoopAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatDuration;
    
    SWGAME_API FSwFloatCharacterData();
};

