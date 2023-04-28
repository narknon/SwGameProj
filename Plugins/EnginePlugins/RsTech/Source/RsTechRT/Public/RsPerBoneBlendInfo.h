#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "RsPerBoneBlendInfo.generated.h"

class UCurveFloat;
class URsBoneMask;

USTRUCT(BlueprintType)
struct FRsPerBoneBlendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsBoneMask* PerBoneBlendTimeMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCustomCurve;
    
    RSTECHRT_API FRsPerBoneBlendInfo();
};

