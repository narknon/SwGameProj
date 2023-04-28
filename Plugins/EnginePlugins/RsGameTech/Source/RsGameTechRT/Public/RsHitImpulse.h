#pragma once
#include "CoreMinimal.h"
#include "ERsHitImpulseType.h"
#include "RsHitImpulse.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHitImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitImpulseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHitImpulseType HitImpulseCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FRsHitImpulse();
};

