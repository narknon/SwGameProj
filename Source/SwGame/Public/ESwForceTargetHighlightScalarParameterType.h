#pragma once
#include "CoreMinimal.h"
#include "ESwForceTargetHighlightScalarParameterType.generated.h"

UENUM(BlueprintType)
enum class ESwForceTargetHighlightScalarParameterType : uint8 {
    OverallIntensity,
    OverallContrast,
    FresnelIntensity,
    FresnelPower,
    FlatFaceForceEffectIntensity,
    FlatFaceForceEffectContrast,
    NormalEdgeIntensity,
    Count,
};

