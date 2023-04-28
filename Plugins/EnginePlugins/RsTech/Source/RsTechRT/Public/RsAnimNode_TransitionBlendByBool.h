#pragma once
#include "CoreMinimal.h"
#include "RsAnimNode_TransitionBlendBase.h"
#include "RsAnimNode_TransitionBlendByBool.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_TransitionBlendByBool : public FRsAnimNode_TransitionBlendBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool bSelectTargetPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    float SourceBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    float TargetBlendTime;
    
    FRsAnimNode_TransitionBlendByBool();
};

