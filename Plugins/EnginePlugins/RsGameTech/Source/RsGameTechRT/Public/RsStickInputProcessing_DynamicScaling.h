#pragma once
#include "CoreMinimal.h"
#include "RsStickInputProcessing_DynamicScaling.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsStickInputProcessing_DynamicScaling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    FRsStickInputProcessing_DynamicScaling();
};

