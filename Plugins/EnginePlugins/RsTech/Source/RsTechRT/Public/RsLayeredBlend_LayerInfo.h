#pragma once
#include "CoreMinimal.h"
#include "RsPerBoneBlendInfo.h"
#include "RsLayeredBlend_LayerInfo.generated.h"

class URsBoneMask;

USTRUCT(BlueprintType)
struct FRsLayeredBlend_LayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsBoneMask* PerBoneBlendWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPerBoneBlendInfo BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPerBoneBlendInfo BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendRotationInMeshSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockNotifiesInLowerLayers;
    
    RSTECHRT_API FRsLayeredBlend_LayerInfo();
};

