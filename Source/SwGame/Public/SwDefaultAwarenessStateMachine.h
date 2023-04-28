#pragma once
#include "CoreMinimal.h"
#include "RsAIBehaviorStateMachine.h"
#include "SwDefaultAwarenessStateMachine.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SWGAME_API USwDefaultAwarenessStateMachine : public URsAIBehaviorStateMachine {
    GENERATED_BODY()
public:
    USwDefaultAwarenessStateMachine();
};

