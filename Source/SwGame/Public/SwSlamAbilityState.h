#pragma once
#include "CoreMinimal.h"
#include "ESwAbilitySlamState.h"
#include "RsAbilityState.h"
#include "SwSlamAbilityState.generated.h"

UCLASS(Blueprintable)
class USwSlamAbilityState : public URsAbilityState {
    GENERATED_BODY()
public:
    USwSlamAbilityState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSlamHeld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwAbilitySlamState GetSlamAbilityState() const;
    
};

