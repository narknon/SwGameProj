#pragma once
#include "CoreMinimal.h"
#include "ESwAIBuddyState.generated.h"

UENUM(BlueprintType)
enum class ESwAIBuddyState : uint8 {
    Attached,
    Follow,
    Roam,
    Mount,
    MountFromWall,
    Dismount,
    Cine,
};

