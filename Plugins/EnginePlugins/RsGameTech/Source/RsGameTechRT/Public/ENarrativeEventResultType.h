#pragma once
#include "CoreMinimal.h"
#include "ENarrativeEventResultType.generated.h"

UENUM(BlueprintType)
enum class ENarrativeEventResultType : uint8 {
    Unset,
    Played,
    Queued,
    Ignored,
    RandomRollFailed,
    StillOnCooldown,
    NoValidFound,
};

