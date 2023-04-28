#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapPositionUpdateType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapPositionUpdateType : uint8 {
    XYZ,
    XYOnly,
    ZOnly,
    Count,
};

