#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Templates/SubclassOf.h"
#include "SwBTDecorator_HasFightExecutionDelayExpired.generated.h"

class USwAIResource_Fight;

UCLASS(Blueprintable)
class USwBTDecorator_HasFightExecutionDelayExpired : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAIResource_Fight> FightResource;
    
public:
    USwBTDecorator_HasFightExecutionDelayExpired();
};

