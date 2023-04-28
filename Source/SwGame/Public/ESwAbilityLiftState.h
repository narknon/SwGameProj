#pragma once
#include "CoreMinimal.h"
#include "ESwAbilityLiftState.generated.h"

UENUM(BlueprintType)
enum class ESwAbilityLiftState : uint8 {
    LiftEnter,
    LiftTwoHandedSuccess,
    LiftTwoHandedTransition,
    LiftTwoHandedStruggle,
    LiftTwoHandedStruggleSuccess,
    LiftAnalogEnter,
    LiftAnalogSuccess,
    LiftAnalogExit,
    LiftSuccess,
    LiftTwoHandedExit,
    Count,
    None = 0xA,
};

