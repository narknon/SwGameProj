#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.generated.h"

UENUM()
enum class EHoudiniCurveMethod : int8 {
    Invalid = -0x1,
    CVs,
    Breakpoints,
    Freehand,
};

