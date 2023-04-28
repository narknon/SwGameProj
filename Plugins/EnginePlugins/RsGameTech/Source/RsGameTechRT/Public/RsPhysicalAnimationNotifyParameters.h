#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationNotifyParameters.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationNotifyParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ModifyVelocityDriveStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityDriveStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ModifyPhysicsBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendWeightFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendWeightFadeOutTime;
    
    FRsPhysicalAnimationNotifyParameters();
};

