#pragma once
#include "CoreMinimal.h"
#include "ESwForceTargetHighlightType.generated.h"

UENUM(BlueprintType)
enum class ESwForceTargetHighlightType : uint8 {
    None,
    Push,
    Pull,
    PushPull,
    Lift,
    Slam,
    LiftSlam,
    All,
    Blocked,
    Count,
    Invalid = 0x9,
};

