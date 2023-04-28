#pragma once
#include "CoreMinimal.h"
#include "ESwWallRunState.generated.h"

UENUM(BlueprintType)
enum class ESwWallRunState : uint8 {
    NotWallRunning,
    WallRunning,
    WallRunExpired,
    WallRunFall,
    WallRunJump,
};

