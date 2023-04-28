#pragma once
#include "CoreMinimal.h"
#include "ESwVictimType.generated.h"

UENUM(BlueprintType)
enum class ESwVictimType : uint8 {
    Undefined,
    Character,
    LevelObject,
    Count,
};

