#pragma once
#include "CoreMinimal.h"
#include "SwLiftSlamAnimationData.h"
#include "SwLiftSlamHandedAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamHandedAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftSlamAnimationData OneHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftSlamAnimationData TwoHanded;
    
    SWGAME_API FSwLiftSlamHandedAnimationData();
};

