#pragma once
#include "CoreMinimal.h"
#include "ERsCIGMatchLeaderMode.generated.h"

UENUM(BlueprintType)
enum class ERsCIGMatchLeaderMode : uint8 {
    SpeedMin,
    SpeedMax,
    Acceleration,
};

