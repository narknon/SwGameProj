#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeMode.generated.h"

UENUM(BlueprintType)
enum class ERsLedgeMode : uint8 {
    Disabled,
    Entry,
    FallWindow,
    CinematicEntry,
    Attached,
    ActiveSeek,
    QueuedShimmy,
    Shimmy,
    Pullup,
    QueuedJumpOff,
    ForcedRelease,
    TransitioningIn,
    TransitioningOut,
    CinematicNavigation,
};

