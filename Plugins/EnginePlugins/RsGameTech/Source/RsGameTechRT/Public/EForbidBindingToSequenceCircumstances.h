#pragma once
#include "CoreMinimal.h"
#include "EForbidBindingToSequenceCircumstances.generated.h"

UENUM(BlueprintType)
enum class EForbidBindingToSequenceCircumstances : uint8 {
    None,
    WhenDead,
    WhenDamaged,
    WhenBeenAffectedByAbility = 0x4,
    WhenInAlertAwarenessState = 0x8,
    WhenInAggroAwarenessState = 0x10,
    WhenHasBeenBrokenOutOfEarlierSequence = 0x20,
    AtAll = 0x40,
};

