#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapRouteLineBuildOnState.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapRouteLineBuildOnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousInterpolationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousAdjustedInterpolationValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NextConnectorIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NextEdgePointIdx;
    
    RSGAMETECHRT_API FRsWorldMapRouteLineBuildOnState();
};

