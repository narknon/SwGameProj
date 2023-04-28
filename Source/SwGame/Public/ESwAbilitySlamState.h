#pragma once
#include "CoreMinimal.h"
#include "ESwAbilitySlamState.generated.h"

UENUM(BlueprintType)
enum class ESwAbilitySlamState : uint8 {
    SlamEnter,
    SlamTwoHandedTransition,
    SlamTwoHandedStruggle,
    SlamTwoHandedStruggleSuccess,
    SlamTwoHandedSuccess,
    SlamTwoHandedExit,
    SlamSuccess,
    SlamExit,
    SlamAnalogEnter,
    SlamAnalogSuccess,
    SlamAnalogExit,
    Count,
    None = 0xB,
};

