#pragma once
#include "CoreMinimal.h"
#include "ERsTargetRotatorMask.generated.h"

UENUM(BlueprintType)
enum class ERsTargetRotatorMask : uint8 {
    None,
    Yaw,
    Pitch,
    Roll,
};

