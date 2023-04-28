#pragma once
#include "CoreMinimal.h"
#include "FSwSpeederBikeWallCollisionType.generated.h"

UENUM(BlueprintType)
enum class FSwSpeederBikeWallCollisionType : uint8 {
    None,
    Front,
    Left,
    Right,
};

