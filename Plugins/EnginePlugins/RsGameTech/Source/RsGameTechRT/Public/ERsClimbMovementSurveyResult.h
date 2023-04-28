#pragma once
#include "CoreMinimal.h"
#include "ERsClimbMovementSurveyResult.generated.h"

UENUM(BlueprintType)
enum class ERsClimbMovementSurveyResult : uint8 {
    SameSurface,
    InsideCorner,
    OutsideCorner,
    SurfaceTransition,
    Invalid,
};

