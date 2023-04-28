#pragma once
#include "CoreMinimal.h"
#include "ERsAIConeScoringPolicy.generated.h"

UENUM(BlueprintType)
namespace ERsAIConeScoringPolicy {
    enum Type {
        Constant,
        Random,
        Dot,
        InverseDot,
    };
}

