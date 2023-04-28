#pragma once
#include "CoreMinimal.h"
#include "ERsAILocationSearchStrategyRelativeToTargetOrSelf.generated.h"

UENUM(BlueprintType)
namespace ERsAILocationSearchStrategyRelativeToTargetOrSelf {
    enum Type {
        RelativeToTarget,
        RelativeToSelf,
    };
}

