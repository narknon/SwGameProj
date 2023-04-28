#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessLevel.generated.h"

UENUM(BlueprintType)
namespace ERsAIAwarenessLevel {
    enum Type {
        Unaware,
        PartiallyAware,
        FullyAware,
    };
}

