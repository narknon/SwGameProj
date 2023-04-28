#pragma once
#include "CoreMinimal.h"
#include "ERsCameraTransitionFlags.generated.h"

UENUM(BlueprintType)
enum class ERsCameraTransitionFlags : uint8 {
    None,
    TransitionWhilePaused,
    MaintainBlendTimeUntilFinished,
    ScaleBlendTime = 0x4,
    DisableInput = 0x8,
    UseCameraCutOnLargeYawChange = 0x10,
    ScaleInput = 0x20,
};

