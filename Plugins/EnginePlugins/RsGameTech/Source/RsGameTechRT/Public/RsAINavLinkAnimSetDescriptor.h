#pragma once
#include "CoreMinimal.h"
#include "ERsAINavLinkApproachMode.h"
#include "RsAINavLinkAnimDescriptor.h"
#include "RsAINavLinkAnimSetDescriptor.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAINavLinkAnimSetDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAINavLinkApproachMode ApproachMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FRsAINavLinkAnimDescriptor ApproachAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FRsAINavLinkAnimDescriptor TraversalAnimation;
    
    FRsAINavLinkAnimSetDescriptor();
};

