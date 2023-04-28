#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwLiftSlamAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FSwLiftSlamAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Enter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData StruggleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Exit;
    
    SWGAME_API FSwLiftSlamAnimationData();
};

