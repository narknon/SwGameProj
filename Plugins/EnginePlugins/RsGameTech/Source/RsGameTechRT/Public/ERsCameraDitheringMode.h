#pragma once
#include "CoreMinimal.h"
#include "ERsCameraDitheringMode.generated.h"

UENUM(BlueprintType)
enum class ERsCameraDitheringMode : uint8 {
    None,
    IntersectClipPlane,
    Obstructions,
};

