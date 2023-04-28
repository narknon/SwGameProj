#pragma once
#include "CoreMinimal.h"
#include "RsAIBlendspaceAnimDescriptor.generated.h"

class UAnimationAsset;
class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIBlendspaceAnimDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    FRsAIBlendspaceAnimDescriptor();
};

