#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwakeState.generated.h"

UENUM(BlueprintType)
namespace ERsAIAwakeState {
    enum Type {
        Awake,
        SleepPending,
        Asleep,
        SemiSleep,
    };
}

