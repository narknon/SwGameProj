#pragma once
#include "CoreMinimal.h"
#include "ERsWallRunEndReason.generated.h"

UENUM(BlueprintType)
enum class ERsWallRunEndReason : uint8 {
    ReleasedWallRun,
    WallLost,
    JumpedFromWallRun,
    NotInAir,
};

