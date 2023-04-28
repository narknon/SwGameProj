#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RsBTDecorator_HasAttackTarget.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_HasAttackTarget : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetActorIsAlive;
    
public:
    URsBTDecorator_HasAttackTarget();
};

