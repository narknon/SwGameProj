#pragma once
#include "CoreMinimal.h"
#include "ERsMapSectionFlags.generated.h"

UENUM(BlueprintType)
enum class ERsMapSectionFlags : uint8 {
    IsExplored,
    IsFogOfWar,
    IsNotExplorable,
    IsSecretArea,
    IsObjective,
    Count,
};

