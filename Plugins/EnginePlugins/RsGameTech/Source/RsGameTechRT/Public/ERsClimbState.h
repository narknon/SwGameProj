#pragma once
#include "CoreMinimal.h"
#include "ERsClimbState.generated.h"

UENUM(BlueprintType)
enum class ERsClimbState : uint8 {
    Disabled,
    UnattachedIdle,
    ActiveSeek,
    Entry,
    FallWindow,
    Attached,
    Climbing,
    QueuedClimbing,
    QueuedWallJump,
    QueuedCeilingJump,
    SurfaceTransition,
    ForcedRelease,
    CinematicNavigation,
    TransitioningIn,
    TransitioningOut,
};

