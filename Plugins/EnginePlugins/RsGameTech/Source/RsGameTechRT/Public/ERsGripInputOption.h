#pragma once
#include "CoreMinimal.h"
#include "ERsGripInputOption.generated.h"

UENUM(BlueprintType)
namespace ERsGripInputOption {
    enum Type {
        ZeroEntry,
        EnableInLedge,
        HoldForLedge,
        LedgeUnconfirmedAfterConstrainedJump = 0x4,
        EnableInClimb = 0x8,
        HoldForClimb = 0x10,
        EnableInZipline = 0x20,
        HoldForZipline = 0x40,
        ClimbUnconfirmedAfterConstrainedJump = 0x80,
        ConstrainedJumpDisablesGrabWithoutHold = 0x100,
    };
}

