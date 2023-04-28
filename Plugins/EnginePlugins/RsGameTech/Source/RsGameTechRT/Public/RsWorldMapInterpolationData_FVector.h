#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldMapInterpolationData_FVector.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FRsWorldMapInterpolationData_FVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpolationCurve;
    
    RSGAMETECHRT_API FRsWorldMapInterpolationData_FVector();
};

