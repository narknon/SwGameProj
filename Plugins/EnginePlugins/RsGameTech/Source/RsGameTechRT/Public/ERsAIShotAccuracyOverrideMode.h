#pragma once
#include "CoreMinimal.h"
#include "ERsAIShotAccuracyOverrideMode.generated.h"

UENUM(BlueprintType)
enum class ERsAIShotAccuracyOverrideMode : uint8 {
    None,
    AlwaysMiss,
    AlwaysMissExtended,
    AlwaysHit,
};

