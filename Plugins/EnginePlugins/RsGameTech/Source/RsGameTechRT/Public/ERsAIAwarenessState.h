#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessState.generated.h"

UENUM(BlueprintType)
namespace ERsAIAwarenessState {
    enum Type {
        None,
        Ambient,
        Alert,
        Aggro,
    };
}

