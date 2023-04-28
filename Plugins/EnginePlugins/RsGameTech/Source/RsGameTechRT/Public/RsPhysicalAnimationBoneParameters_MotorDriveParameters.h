#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationMotorDriveModel.h"
#include "RsPhysicalAnimationBoneParameters_MotorDriveParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationBoneParameters_MotorDriveParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MotorDriveIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationMotorDriveModel MotorDriveModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotorDriveStrength;
    
    FRsPhysicalAnimationBoneParameters_MotorDriveParameters();
};

