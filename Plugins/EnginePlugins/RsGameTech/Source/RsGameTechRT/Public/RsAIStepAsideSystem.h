#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAIStepAsideSystem.generated.h"

UCLASS(Blueprintable)
class URsAIStepAsideSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TaskReferencedObjects;
    
public:
    URsAIStepAsideSystem();
};

