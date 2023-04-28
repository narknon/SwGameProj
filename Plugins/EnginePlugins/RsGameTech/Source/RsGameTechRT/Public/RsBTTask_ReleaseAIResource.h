#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Templates/SubclassOf.h"
#include "RsBTTask_ReleaseAIResource.generated.h"

class URsAIResource;

UCLASS(Blueprintable)
class URsBTTask_ReleaseAIResource : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAIResource> ResourceClass;
    
public:
    URsBTTask_ReleaseAIResource();
};

