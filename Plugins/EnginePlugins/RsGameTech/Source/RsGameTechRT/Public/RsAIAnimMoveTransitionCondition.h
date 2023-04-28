#pragma once
#include "CoreMinimal.h"
#include "ERsAIAnimMoveTransitionOp.h"
#include "RsAIAnimMoveTransitionCondition.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRsAIAnimMoveTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAIAnimMoveTransitionOp Op;
    
    RSGAMETECHRT_API FRsAIAnimMoveTransitionCondition();
};

