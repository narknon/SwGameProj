#pragma once
#include "CoreMinimal.h"
#include "SwSpaceshipCrosshairConstants.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpaceshipCrosshairConstants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairScreenBounds;
    
    FSwSpaceshipCrosshairConstants();
};

