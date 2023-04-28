#pragma once
#include "CoreMinimal.h"
#include "ERsFallDeathTrackingMode.generated.h"

UENUM(BlueprintType)
enum class ERsFallDeathTrackingMode : uint8 {
    MovementMode,
    NavState,
};

