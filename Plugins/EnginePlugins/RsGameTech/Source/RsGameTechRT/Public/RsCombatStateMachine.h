#pragma once
#include "CoreMinimal.h"
#include "RsStateObjectMachine.h"
#include "RsCombatStateMachine.generated.h"

UCLASS(Blueprintable)
class URsCombatStateMachine : public URsStateObjectMachine {
    GENERATED_BODY()
public:
    URsCombatStateMachine();
};

