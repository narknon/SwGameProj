#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapPISecondaryPriority.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapPISecondaryPriority : uint8 {
    Invalid,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
    Count,
};

