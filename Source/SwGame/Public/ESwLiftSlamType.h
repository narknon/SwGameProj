#pragma once
#include "CoreMinimal.h"
#include "ESwLiftSlamType.generated.h"

UENUM(BlueprintType)
enum class ESwLiftSlamType : uint8 {
    Default,
    Reverse,
    SlamOnly,
    LiftOnly,
    Count,
    Invalid = 0x4,
};

