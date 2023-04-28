#pragma once
#include "CoreMinimal.h"
#include "ERsGalaxyMapState.generated.h"

UENUM(BlueprintType)
enum class ERsGalaxyMapState : uint8 {
    None,
    Entering,
    MovingLeft,
    MovingRight,
    Count,
};

