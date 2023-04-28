#pragma once
#include "CoreMinimal.h"
#include "EFSR2QualityMode.generated.h"

UENUM(BlueprintType)
enum class EFSR2QualityMode : uint8 {
    Unused,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

