#pragma once
#include "CoreMinimal.h"
#include "ERsCurve.generated.h"

UENUM(BlueprintType)
enum class ERsCurve : uint8 {
    LINEAR,
    SQUARE,
    SQUAREROOT,
    SINE,
    INVERSE,
    M1_LINEAR,
    M1_SQUARE,
    M1_SQUAREROOT,
    M1_SINE,
    COUNT,
};

