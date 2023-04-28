#pragma once
#include "CoreMinimal.h"
#include "ERsAIShotAccuracyOverrideMode.h"
#include "RsFireProjectileParameter.generated.h"

USTRUCT(BlueprintType)
struct FRsFireProjectileParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireAlternateProjectileType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanShootDuringForceSlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAIShotAccuracyOverrideMode ShotAccuracyOverrideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootingConeHalfAngle;
    
    RSGAMETECHRT_API FRsFireProjectileParameter();
};

