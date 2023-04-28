#pragma once
#include "CoreMinimal.h"
#include "ERsCameraBehaviorState.generated.h"

UENUM(BlueprintType)
enum ERsCameraBehaviorState {
    RsCameraBehaviorState_Inactive,
    RsCameraBehaviorState_FirstUpdate,
    RsCameraBehaviorState_Active,
    RsCameraBehaviorState_MAX UMETA(Hidden),
};

