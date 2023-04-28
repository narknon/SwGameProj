#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "Templates/SubclassOf.h"
#include "RsBTService_LockoutAIResource.generated.h"

class URsAIResource;

UCLASS(Blueprintable)
class URsBTService_LockoutAIResource : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIResource> ResourceClass;
    
public:
    URsBTService_LockoutAIResource();
};

