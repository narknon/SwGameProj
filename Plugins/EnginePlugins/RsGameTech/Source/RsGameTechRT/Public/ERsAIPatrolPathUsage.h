#pragma once
#include "CoreMinimal.h"
#include "ERsAIPatrolPathUsage.generated.h"

UENUM(BlueprintType)
namespace ERsAIPatrolPathUsage {
    enum Type {
        OneTime,
        Loop,
        Oscillate,
    };
}

