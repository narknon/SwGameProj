#pragma once
#include "CoreMinimal.h"
#include "ERsWayfinderGoalFoundMode.generated.h"

UENUM(BlueprintType)
enum class ERsWayfinderGoalFoundMode : uint8 {
    NotFound,
    SteppingForward,
    SteppingBack,
};

