#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ERsAIResourceProvider.h"
#include "Templates/SubclassOf.h"
#include "RsAIAcquireResourceParameters.generated.h"

class URsAIResource;

USTRUCT(BlueprintType)
struct FRsAIAcquireResourceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIResource> ResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bQueued: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTryOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIResourceProvider::Type> ResourceProvider;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ResourceProviderKey;
    
    RSGAMETECHRT_API FRsAIAcquireResourceParameters();
};

