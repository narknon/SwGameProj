#pragma once
#include "CoreMinimal.h"
#include "ESwAbilityState.generated.h"

UENUM(BlueprintType)
enum class ESwAbilityState : uint8 {
    None,
    Lift,
    Slam,
    Push,
    Count,
};

