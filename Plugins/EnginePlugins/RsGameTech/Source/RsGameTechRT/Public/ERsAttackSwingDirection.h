#pragma once
#include "CoreMinimal.h"
#include "ERsAttackSwingDirection.generated.h"

UENUM(BlueprintType)
enum class ERsAttackSwingDirection : uint8 {
    None,
    Left,
    Right,
    Up,
    Down,
    Forward,
    Low,
    High,
    NumSwingDirections,
};

