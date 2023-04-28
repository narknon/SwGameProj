#pragma once
#include "CoreMinimal.h"
#include "ERsMotionMatchTag.generated.h"

UENUM(BlueprintType)
enum class ERsMotionMatchTag : uint8 {
    None,
    Uninterruptible,
    MoveStop,
    Ignored = 0x4,
};

