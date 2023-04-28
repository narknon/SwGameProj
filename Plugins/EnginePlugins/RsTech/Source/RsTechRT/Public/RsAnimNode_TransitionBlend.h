#pragma once
#include "CoreMinimal.h"
#include "RsAnimNode_TransitionBlendBase.h"
#include "RsAnimNode_TransitionBlend.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_TransitionBlend : public FRsAnimNode_TransitionBlendBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    float ALPHA;
    
    FRsAnimNode_TransitionBlend();
};

