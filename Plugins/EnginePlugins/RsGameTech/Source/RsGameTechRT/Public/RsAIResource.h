#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAIResource.generated.h"

UCLASS(Blueprintable)
class URsAIResource : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGlobalResource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMaxAIResourceCount: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAIResourceCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bQueuedRequestsBlock: 1;
    
public:
    URsAIResource();
};

