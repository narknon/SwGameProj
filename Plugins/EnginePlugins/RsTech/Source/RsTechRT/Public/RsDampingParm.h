#pragma once
#include "CoreMinimal.h"
#include "RsOptionalFloat.h"
#include "RsDampingParm.generated.h"

USTRUCT(BlueprintType)
struct FRsDampingParm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat SpeedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat DampFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat DampoffSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat DampoffAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOptionalFloat ResponseCurveExponent;
    
    RSTECHRT_API FRsDampingParm();
};

