#pragma once
#include "CoreMinimal.h"
#include "ESwSlamVictimType.generated.h"

UENUM(BlueprintType)
enum class ESwSlamVictimType : uint8 {
    Floored,
    Stagger,
    Count,
};

