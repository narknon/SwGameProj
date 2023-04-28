#pragma once
#include "CoreMinimal.h"
#include "RsShimmyJumpAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsShimmyJumpAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AnimDistanceRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DurationRanges;
    
    FRsShimmyJumpAnimationInfo();
};

