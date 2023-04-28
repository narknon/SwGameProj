#pragma once
#include "CoreMinimal.h"
#include "ERsWallRelativeFacingClassification.generated.h"

UENUM(BlueprintType)
enum class ERsWallRelativeFacingClassification : uint8 {
    FacingWall,
    AlongWall,
    AwayFromWall,
};

