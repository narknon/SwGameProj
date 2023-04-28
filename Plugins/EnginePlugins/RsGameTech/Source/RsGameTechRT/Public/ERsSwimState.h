#pragma once
#include "CoreMinimal.h"
#include "ERsSwimState.generated.h"

UENUM(BlueprintType)
enum class ERsSwimState : uint8 {
    None,
    ShallowWater,
    SwimmingOnSurface,
    Diving,
};

