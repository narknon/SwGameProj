#pragma once
#include "CoreMinimal.h"
#include "ERsFallOutOfWorldResult.generated.h"

UENUM(BlueprintType)
enum class ERsFallOutOfWorldResult : uint8 {
    Aborted,
    CausedDamage,
    Killed,
};

