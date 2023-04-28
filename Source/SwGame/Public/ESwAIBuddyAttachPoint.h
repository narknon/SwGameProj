#pragma once
#include "CoreMinimal.h"
#include "ESwAIBuddyAttachPoint.generated.h"

UENUM(BlueprintType)
enum class ESwAIBuddyAttachPoint : uint8 {
    Detached,
    Charging,
    RightShoulder,
    LeftShoulder,
    Zipline,
    Holomap,
};

