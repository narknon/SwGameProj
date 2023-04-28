#pragma once
#include "CoreMinimal.h"
#include "ERsAIDistancePolicy.generated.h"

UENUM(BlueprintType)
namespace ERsAIDistancePolicy {
    enum Type {
        Ignore,
        Close,
        Medium,
        Far,
    };
}

