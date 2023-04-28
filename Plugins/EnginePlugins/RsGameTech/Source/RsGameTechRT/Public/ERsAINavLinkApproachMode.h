#pragma once
#include "CoreMinimal.h"
#include "ERsAINavLinkApproachMode.generated.h"

UENUM()
enum class ERsAINavLinkApproachMode : int32 {
    SyncToLocation,
    ApproachByBlendSpace,
    ConstrainedMovement,
};

