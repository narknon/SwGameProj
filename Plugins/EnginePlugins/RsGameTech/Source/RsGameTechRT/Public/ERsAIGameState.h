#pragma once
#include "CoreMinimal.h"
#include "ERsAIGameState.generated.h"

UENUM(BlueprintType)
namespace ERsAIGameState {
    enum Type {
        OutOfCombat,
        PreCombat,
        Combat,
        PostCombat,
    };
}

