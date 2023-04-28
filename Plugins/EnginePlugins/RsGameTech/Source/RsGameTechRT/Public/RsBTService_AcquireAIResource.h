#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "RsAIAcquireResourceParameters.h"
#include "RsBTService_AcquireAIResource.generated.h"

UCLASS(Blueprintable)
class URsBTService_AcquireAIResource : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIAcquireResourceParameters AcquireResourceParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequestWhenUnacquired: 1;
    
public:
    URsBTService_AcquireAIResource();
};

