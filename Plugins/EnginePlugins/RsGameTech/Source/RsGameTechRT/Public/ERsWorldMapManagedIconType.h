#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapManagedIconType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapManagedIconType : uint8 {
    Objective,
    NavAssist,
    DeathRevengePosition,
    Count,
};

