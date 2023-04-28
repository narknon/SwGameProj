#pragma once
#include "CoreMinimal.h"
#include "ERsHolomapState.generated.h"

UENUM(BlueprintType)
enum class ERsHolomapState : uint8 {
    Opening,
    CameraFlyIn,
    InMap,
    Closing,
    Closed,
    SwitchingLevel,
};

