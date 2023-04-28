#pragma once
#include "CoreMinimal.h"
#include "ERsDistanceMatchMode.generated.h"

UENUM(BlueprintType)
enum class ERsDistanceMatchMode : uint8 {
    Ignored,
    FilterBySequence,
    FilterByFrameDistance,
};

