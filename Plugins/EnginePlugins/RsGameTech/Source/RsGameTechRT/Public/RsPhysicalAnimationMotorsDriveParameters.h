#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationMotorDriveConfiguration.h"
#include "RsPhysicalAnimationMotorsDriveParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationMotorsDriveParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPositionDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVelocityDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMotorsDriveConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsPhysicalAnimationMotorDriveConfiguration> MotorsDriveConfiguration;
    
    FRsPhysicalAnimationMotorsDriveParameters();
};

