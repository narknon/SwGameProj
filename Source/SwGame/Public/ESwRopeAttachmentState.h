#pragma once
#include "CoreMinimal.h"
#include "ESwRopeAttachmentState.generated.h"

UENUM(BlueprintType)
enum class ESwRopeAttachmentState : uint8 {
    NotAttachedToRope,
    Strafing,
    NotSwingingOrClimbing,
    SwingForwardStarted,
    SwingBackwardStarted,
    SwingingForward,
    SwingingBackward,
    SwingingForwardNoInput,
    SwingingBackwardNoInput,
    SwingingTurningLeftToRight,
    SwingingTurningRightToLeft,
    BackSwingingTurningLeftToRight,
    BackSwingingTurningRightToLeft,
    ClimbIdle,
    ClimbAscend,
    ClimbDescend,
    ClimbTurningLeft,
    ClimbTurningRight,
    DetachingFromRope,
    RESET_STATE,
    INVALID,
};

