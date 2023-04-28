#pragma once
#include "CoreMinimal.h"
#include "ESwMassSlamLevel.generated.h"

UENUM(BlueprintType)
enum class ESwMassSlamLevel : uint8 {
    MassSlam1,
    MassSlam2,
    MassSlam3,
    Count,
    None = 0x3,
};

