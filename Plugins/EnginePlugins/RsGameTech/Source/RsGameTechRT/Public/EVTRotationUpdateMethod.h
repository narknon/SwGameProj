#pragma once
#include "CoreMinimal.h"
#include "EVTRotationUpdateMethod.generated.h"

UENUM(BlueprintType)
enum EVTRotationUpdateMethod {
    VTRUM_MoveInputDirection,
    VTRUM_FaceCameraDirection,
    VTRUM_FaceFocusLocation,
    VTRUM_BlueprintControl,
    VTRUM_NoUpdate,
    VTRUM_FaceFocusDirection,
    VTRUM_ClampedRotation,
    VTRUM_Invalid,
    VTRUM_MAX UMETA(Hidden),
};

