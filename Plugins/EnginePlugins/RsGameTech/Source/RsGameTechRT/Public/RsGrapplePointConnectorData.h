#pragma once
#include "CoreMinimal.h"
#include "RsGrapplePointConnectorData.generated.h"

USTRUCT(BlueprintType)
struct FRsGrapplePointConnectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleSplinePosition;
    
    RSGAMETECHRT_API FRsGrapplePointConnectorData();
};

