#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "ERsSpeedWarpingAxis.h"
#include "RsLegIKChainData.h"
#include "RsAnimNode_SpeedWarping.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsLegIKChainData> LegIKChains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWarpingFactorFromInputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAffectRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsSpeedWarpingAxis WarpingAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WarpingOrigin;
    
    FRsAnimNode_SpeedWarping();
};

