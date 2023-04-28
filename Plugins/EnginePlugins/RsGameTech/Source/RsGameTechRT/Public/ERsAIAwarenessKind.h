#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessKind.generated.h"

UENUM(BlueprintType)
namespace ERsAIAwarenessKind {
    enum Type {
        Saw,
        Heard,
        DamagedBy,
        TouchedBy,
        Indirect,
        Beacon,
    };
}

