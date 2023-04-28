#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SwBTDecorator_ShouldMaintainMinPassiveDistance.generated.h"

UCLASS(Blueprintable)
class USwBTDecorator_ShouldMaintainMinPassiveDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    USwBTDecorator_ShouldMaintainMinPassiveDistance();
};

