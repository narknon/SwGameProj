#pragma once
#include "CoreMinimal.h"
#include "ERsTotalPlayTimeMode.generated.h"

UENUM(BlueprintType)
enum class ERsTotalPlayTimeMode : uint8 {
    CountAllPlayTime,
    CountPlayTimeWithPausesOnly,
    DoNotCountAnyPlayTime,
};

