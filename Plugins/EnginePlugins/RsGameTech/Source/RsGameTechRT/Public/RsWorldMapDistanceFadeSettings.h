#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapDistanceFadeSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsWorldMapDistanceFadeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceRadiusMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRadius;
    
    FRsWorldMapDistanceFadeSettings();
};

