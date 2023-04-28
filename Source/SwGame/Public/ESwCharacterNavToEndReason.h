#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToEndReason.generated.h"

UENUM(BlueprintType)
enum class ESwCharacterNavToEndReason : uint8 {
    Completed,
    Failed,
    Interrupted,
    Cancelled,
    TimedOut,
};

