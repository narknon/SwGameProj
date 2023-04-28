#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniRampInterpolationType : uint8 {
    InValid = -0x1,
    CONSTANT,
    LINEAR,
    CATMULL_ROM,
    MONOTONE_CUBIC,
    BEZIER,
    BSPLINE,
    HERMITE,
};

