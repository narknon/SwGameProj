#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapRouteLineEdgeData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapRouteLineEdgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAlongSpline;
    
    RSGAMETECHRT_API FRsWorldMapRouteLineEdgeData();
};

