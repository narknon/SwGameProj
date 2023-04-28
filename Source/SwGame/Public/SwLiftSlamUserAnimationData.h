#pragma once
#include "CoreMinimal.h"
#include "SwLiftSlamUserAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamUserAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStruggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStruggleInfinite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleDuration;
    
    SWGAME_API FSwLiftSlamUserAnimationData();
};

