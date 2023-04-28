#pragma once
#include "CoreMinimal.h"
#include "ESwDFXType.generated.h"

UENUM(BlueprintType)
enum class ESwDFXType : uint8 {
    LedgeBelow,
    ClimbAbove,
    FallAbove,
    EdgeAbove,
    MountAbove,
    Backstab,
    Count,
};

