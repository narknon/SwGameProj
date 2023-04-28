#pragma once
#include "CoreMinimal.h"
#include "ECameraMotionSmoothingTarget.generated.h"

UENUM(BlueprintType)
enum ECameraMotionSmoothingTarget {
    CMST_Anchor,
    CMST_Focus,
    CMST_MAX UMETA(Hidden),
};

