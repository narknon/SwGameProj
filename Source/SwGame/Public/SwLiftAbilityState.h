#pragma once
#include "CoreMinimal.h"
#include "ESwAbilityLiftState.h"
#include "RsAbilityState.h"
#include "SwLiftAbilityState.generated.h"

UCLASS(Blueprintable)
class USwLiftAbilityState : public URsAbilityState {
    GENERATED_BODY()
public:
    USwLiftAbilityState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsLiftHeld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwAbilityLiftState GetLiftAbilityState() const;
    
};

