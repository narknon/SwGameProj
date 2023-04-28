#pragma once
#include "CoreMinimal.h"
#include "ESwMassLiftLevel.generated.h"

UENUM(BlueprintType)
enum class ESwMassLiftLevel : uint8 {
    MassLift1,
    MassLift2,
    MassLift3,
    Count,
    None = 0x3,
};

