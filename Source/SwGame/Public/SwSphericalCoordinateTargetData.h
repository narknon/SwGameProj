#pragma once
#include "CoreMinimal.h"
#include "SwSphericalCoordinateTargetData.generated.h"

USTRUCT(BlueprintType)
struct FSwSphericalCoordinateTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AzimuthAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PolarAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    SWGAME_API FSwSphericalCoordinateTargetData();
};

