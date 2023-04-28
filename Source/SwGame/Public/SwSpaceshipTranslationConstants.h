#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwSpaceshipTranslationConstants.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpaceshipTranslationConstants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AxisLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxLinearSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LinearAccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseVelocityPercentageDirectionChange;
    
    FSwSpaceshipTranslationConstants();
};

