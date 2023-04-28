#pragma once
#include "CoreMinimal.h"
#include "ERsJumpState.generated.h"

UENUM(BlueprintType)
enum ERsJumpState {
    NotJumping,
    Jumping,
    DoubleJumping,
    WallJumping,
    ConstrainedJumping,
};

