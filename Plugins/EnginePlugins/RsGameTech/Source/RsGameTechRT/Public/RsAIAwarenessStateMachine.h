#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessReactionState.h"
#include "RsStateObjectMachine.h"
#include "RsAIAwarenessStateMachine.generated.h"

UCLASS(Blueprintable)
class URsAIAwarenessStateMachine : public URsStateObjectMachine {
    GENERATED_BODY()
public:
    URsAIAwarenessStateMachine();
    UFUNCTION(BlueprintCallable)
    void SetAwarenessReactionState(TEnumAsByte<ERsAIAwarenessReactionState::Type> NewAwarenessReactionState);
    
};

