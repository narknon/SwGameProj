#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessReactionState.generated.h"

UENUM(BlueprintType)
namespace ERsAIAwarenessReactionState {
    enum Type {
        None,
        Ambient,
        AmbientToAlert,
        Alert,
        AlertToAggro,
        Aggro,
        AggroToAlert,
        AlertToAmbient,
    };
}

