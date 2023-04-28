#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapInterpolationData_float.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FRsWorldMapInterpolationData_float {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpolationCurve;
    
    RSGAMETECHRT_API FRsWorldMapInterpolationData_float();
};

