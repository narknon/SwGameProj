#pragma once
#include "CoreMinimal.h"
#include "ESwDistanceAngleTargetingMode.generated.h"

UENUM(BlueprintType)
enum class ESwDistanceAngleTargetingMode : uint8 {
    None,
    Player,
    Camera,
    CameraSwitchTarget,
};

