#pragma once
#include "CoreMinimal.h"
#include "ERsCameraRotationHingeFlags.generated.h"

UENUM(BlueprintType)
enum class ERsCameraRotationHingeFlags : uint8 {
    Enabled,
    Disabled,
    DisabledForCombatAutoAdjust,
    DisabledForLookInFallDirection = 0x4,
    DisabledForSoftPush = 0x8,
    DisabledForCameraCone = 0x10,
    DisabledForWallAdjust = 0x20,
};

