#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "RsAnimNode_SelectPoseByBool.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_SelectPoseByBool : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink TruePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink FalsePose;
    
    FRsAnimNode_SelectPoseByBool();
};

