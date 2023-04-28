#pragma once
#include "CoreMinimal.h"
#include "RsAbilityState.h"
#include "SwForceFocusAbilityState.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwForceFocusAbilityState : public URsAbilityState {
    GENERATED_BODY()
public:
    USwForceFocusAbilityState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetFocusTarget(AActor* InCurrentAbilityTarget) const;
    
};

