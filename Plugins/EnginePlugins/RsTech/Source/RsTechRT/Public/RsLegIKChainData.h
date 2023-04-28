#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "RsLegIKChainData.generated.h"

USTRUCT(BlueprintType)
struct FRsLegIKChainData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Root;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Knee;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Foot;
    
    RSTECHRT_API FRsLegIKChainData();
};

