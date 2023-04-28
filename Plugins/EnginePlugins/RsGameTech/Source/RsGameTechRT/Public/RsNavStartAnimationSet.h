#pragma once
#include "CoreMinimal.h"
#include "RsNavStartAnimation.h"
#include "RsNavStartAnimationSet.generated.h"

USTRUCT(BlueprintType)
struct FRsNavStartAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsNavStartAnimation> AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    RSGAMETECHRT_API FRsNavStartAnimationSet();
};

