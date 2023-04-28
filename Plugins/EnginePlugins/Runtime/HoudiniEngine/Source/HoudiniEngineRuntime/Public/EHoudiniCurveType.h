#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveType.generated.h"

UENUM()
enum class EHoudiniCurveType : int8 {
    Invalid = -0x1,
    Polygon,
    Nurbs,
    Bezier,
    Points,
};

