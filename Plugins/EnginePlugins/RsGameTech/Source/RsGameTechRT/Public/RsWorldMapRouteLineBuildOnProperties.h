#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapRouteLineBuildOnProperties.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FRsWorldMapRouteLineBuildOnProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BuildOnCurve;
    
    RSGAMETECHRT_API FRsWorldMapRouteLineBuildOnProperties();
};

