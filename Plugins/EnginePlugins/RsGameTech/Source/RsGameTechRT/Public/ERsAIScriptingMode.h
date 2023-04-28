#pragma once
#include "CoreMinimal.h"
#include "ERsAIScriptingMode.generated.h"

UENUM(BlueprintType)
namespace ERsAIScriptingMode {
    enum Type {
        None,
        Minimum,
        ForceAggroToPlayer,
        IgnorePlayer,
        IgnoreOpponents,
        IgnoreAllAndDisableAwareness,
        Maximum,
        Keep,
    };
}

