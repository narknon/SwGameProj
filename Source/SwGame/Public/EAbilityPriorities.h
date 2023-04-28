#pragma once
#include "CoreMinimal.h"
#include "EAbilityPriorities.generated.h"

UENUM(BlueprintType)
namespace EAbilityPriorities {
    enum Type {
        Ignore,
        Low,
        Medium,
        High,
        Always,
        Count,
    };
}

