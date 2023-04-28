#pragma once
#include "CoreMinimal.h"
#include "ERsTopologyMode.h"
#include "RsAbilityEffectTask.h"
#include "SwFallAETask.generated.h"

UCLASS(Blueprintable)
class USwFallAETask : public URsAbilityEffectTask {
    GENERATED_BODY()
public:
    USwFallAETask();
private:
    UFUNCTION(BlueprintCallable)
    void OnBumperTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
};

