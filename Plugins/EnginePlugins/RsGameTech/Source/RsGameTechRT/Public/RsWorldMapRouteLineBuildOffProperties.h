#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapRouteLineBuildOffProperties.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FRsWorldMapRouteLineBuildOffProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BuildOffCurve;
    
    RSGAMETECHRT_API FRsWorldMapRouteLineBuildOffProperties();
};

