#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Templates/SubclassOf.h"
#include "RsBTDecorator_HasAIResource.generated.h"

class URsAIResource;

UCLASS(Blueprintable)
class URsBTDecorator_HasAIResource : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIResource> ResourceClass;
    
public:
    URsBTDecorator_HasAIResource();
};

