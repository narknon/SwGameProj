#pragma once
#include "CoreMinimal.h"
#include "ERsPlayerWallHangState.generated.h"

UENUM(BlueprintType)
enum class ERsPlayerWallHangState : uint8 {
    NotWallHanging,
    ConnectingToWall,
    WallHangPause,
    WallHangSlide,
};

