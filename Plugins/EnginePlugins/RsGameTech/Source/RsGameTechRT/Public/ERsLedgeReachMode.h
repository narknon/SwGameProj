#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeReachMode.generated.h"

UENUM(BlueprintType)
enum class ERsLedgeReachMode : uint8 {
    NOT_REACHING,
    LEDGE_REACH,
    AIR_REACH,
};

