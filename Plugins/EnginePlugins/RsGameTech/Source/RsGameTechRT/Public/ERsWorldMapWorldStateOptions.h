#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapWorldStateOptions.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapWorldStateOptions : uint8 {
    VisibleBefore,
    VisibleAfter,
    Count,
};

