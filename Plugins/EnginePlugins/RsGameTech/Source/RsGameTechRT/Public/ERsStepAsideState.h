#pragma once
#include "CoreMinimal.h"
#include "ERsStepAsideState.generated.h"

UENUM(BlueprintType)
enum class ERsStepAsideState : uint8 {
    Idle,
    DelayingReaction,
    SteppingAside,
    Holding,
    ReturningToPlace,
};

