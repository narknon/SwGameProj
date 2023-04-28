#pragma once
#include "CoreMinimal.h"
#include "ERootMotionModifierState.generated.h"

UENUM(BlueprintType)
enum class ERootMotionModifierState : uint8 {
    Waiting,
    Active,
    MarkedForRemoval,
    Disabled,
};

