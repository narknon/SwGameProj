#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToMovementSpace.generated.h"

UENUM(BlueprintType)
enum class ESwCharacterNavToMovementSpace : uint8 {
    Automatic,
    Horizontal2D,
    Full3D,
};

