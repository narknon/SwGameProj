#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeShimmyDirection.generated.h"

UENUM(BlueprintType)
enum class ERsLedgeShimmyDirection : uint8 {
    DIRECTION_NONE,
    DIRECTION_LEFT,
    DIRECTION_RIGHT,
    DIRECTION_UP,
    DIRECTION_DOWN,
    DIRECTION_MAX UMETA(Hidden),
};

