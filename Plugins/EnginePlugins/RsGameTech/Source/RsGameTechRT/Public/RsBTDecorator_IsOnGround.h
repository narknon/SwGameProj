#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsTopologyMode.h"
#include "RsBTDecorator_IsOnGround.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_IsOnGround : public UBTDecorator {
    GENERATED_BODY()
public:
    URsBTDecorator_IsOnGround();
private:
    UFUNCTION(BlueprintCallable)
    void OnTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
};

