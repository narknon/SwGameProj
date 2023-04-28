#pragma once
#include "CoreMinimal.h"
#include "RsAISenseDisableReason.generated.h"

UENUM(BlueprintType)
enum class RsAISenseDisableReason : uint8 {
    None,
    Sleep,
    Script,
    Controller = 0x4,
    NoInstances = 0x8,
};

