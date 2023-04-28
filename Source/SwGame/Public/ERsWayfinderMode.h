#pragma once
#include "CoreMinimal.h"
#include "ERsWayfinderMode.generated.h"

UENUM(BlueprintType)
enum class ERsWayfinderMode : uint8 {
    DoNothing,
    SearchingSpace,
    GoalSet,
};

