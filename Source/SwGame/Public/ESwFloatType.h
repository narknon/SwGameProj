#pragma once
#include "CoreMinimal.h"
#include "ESwFloatType.generated.h"

UENUM(BlueprintType)
enum class ESwFloatType : uint8 {
    VerySmall,
    Small,
    Medium,
    Large,
    XLarge,
    XXLarge,
    Count,
};

