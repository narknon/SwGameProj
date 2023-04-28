#pragma once
#include "CoreMinimal.h"
#include "ERsIkSurfaceTraceMode.generated.h"

UENUM(BlueprintType)
enum class ERsIkSurfaceTraceMode : uint8 {
    TraceFromBone,
    TraceFromBoneSurfaceProjection,
    TraceFromBoneSurfaceAxisProjection,
};

