#pragma once
#include "CoreMinimal.h"
#include "ERsTopologyMode.h"
#include "RsAbilityEffectTask.h"
#include "SwFallAETask.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SWGAME_API USwFallAETask : public URsAbilityEffectTask {
    GENERATED_BODY()
public:
    USwFallAETask();
private:
    UFUNCTION(BlueprintCallable)
    void OnBumperTopologyChanged(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
    
};

