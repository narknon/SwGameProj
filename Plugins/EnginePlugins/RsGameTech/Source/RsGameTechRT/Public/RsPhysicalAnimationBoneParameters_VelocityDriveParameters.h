#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationBoneParameters_VelocityDriveParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationBoneParameters_VelocityDriveParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VelocityDriveIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityDriveStrength;
    
    FRsPhysicalAnimationBoneParameters_VelocityDriveParameters();
};

