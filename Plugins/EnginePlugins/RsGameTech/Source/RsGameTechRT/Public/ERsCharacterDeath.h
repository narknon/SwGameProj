#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterDeath.generated.h"

UENUM(BlueprintType)
enum class ERsCharacterDeath : uint8 {
    Unknown,
    Default,
    StandardProjectile,
    StandardMelee,
    Flatten,
    Launch,
    Flyback,
    Impale,
    LiftSlam,
    PullDoubleSlam,
    Placeholder1,
    Placeholder2,
    Placeholder3,
    Placeholder4,
    Placeholder5,
};

