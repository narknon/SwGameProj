#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RsBTDecorator_CanMoveBackwards.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CanMoveBackwards : public UBTDecorator {
    GENERATED_BODY()
public:
    URsBTDecorator_CanMoveBackwards();
};

