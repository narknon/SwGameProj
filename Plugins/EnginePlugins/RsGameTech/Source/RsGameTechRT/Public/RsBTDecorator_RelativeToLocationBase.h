#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTDecorator_RelativeToLocationBase.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_RelativeToLocationBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LocationSourceKey;
    
public:
    URsBTDecorator_RelativeToLocationBase();
};

