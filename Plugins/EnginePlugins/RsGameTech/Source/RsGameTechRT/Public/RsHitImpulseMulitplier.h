#pragma once
#include "CoreMinimal.h"
#include "RsHitImpulseMulitplier.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHitImpulseMulitplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMultiplier;
    
    FRsHitImpulseMulitplier();
};

