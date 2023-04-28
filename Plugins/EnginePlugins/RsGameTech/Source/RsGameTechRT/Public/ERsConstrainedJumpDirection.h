#pragma once
#include "CoreMinimal.h"
#include "ERsConstrainedJumpDirection.generated.h"

UENUM(BlueprintType)
enum class ERsConstrainedJumpDirection : uint8 {
    NONE,
    UP,
    RIGHT,
    UP_RIGHT,
    LEFT,
    UP_LEFT,
};

