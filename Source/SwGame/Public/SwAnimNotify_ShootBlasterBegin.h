#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ERsAIShotAccuracyOverrideMode.h"
#include "SwAnimNotify_ShootBlasterBegin.generated.h"

UCLASS(Blueprintable)
class USwAnimNotify_ShootBlasterBegin : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireAlternativeBlasterType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanShotDuringForceSlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAIShotAccuracyOverrideMode AccuracyOverrideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootingConeHalfAngle;
    
public:
    USwAnimNotify_ShootBlasterBegin();
};

