#pragma once
#include "CoreMinimal.h"
#include "RsNavStartAnimation.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FRsNavStartAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    RSGAMETECHRT_API FRsNavStartAnimation();
};

