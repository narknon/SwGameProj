#pragma once
#include "CoreMinimal.h"
#include "ESwLiftSlamState.generated.h"

UENUM(BlueprintType)
enum class ESwLiftSlamState : uint8 {
    None,
    LiftStruggling,
    Lifting,
    Floating,
    SlamStruggling,
    SlamStagger,
    Slamming,
    Retracting,
    LiftStagger,
    Count,
};

