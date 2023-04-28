#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterWallSide.generated.h"

UENUM(BlueprintType)
enum class ERsCharacterWallSide : uint8 {
    NotOnWall,
    WallOnRight,
    WallOnLeft,
};

