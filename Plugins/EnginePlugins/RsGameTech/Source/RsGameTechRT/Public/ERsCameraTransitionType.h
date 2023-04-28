#pragma once
#include "CoreMinimal.h"
#include "ERsCameraTransitionType.generated.h"

UENUM(BlueprintType)
enum class ERsCameraTransitionType : uint8 {
    Linear,
    CurveEval,
    EaseFunction,
    Inertial,
    ViewTarget,
    Arc,
    Movement,
};

