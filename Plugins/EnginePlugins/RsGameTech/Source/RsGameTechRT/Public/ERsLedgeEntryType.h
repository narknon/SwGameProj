#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeEntryType.generated.h"

UENUM(BlueprintType)
enum class ERsLedgeEntryType : uint8 {
    NO_ENTRY,
    ENTRY_GRAB,
    ENTRY_HALF_GRAB,
    ENTRY_KNEE,
    ENTRY_MANTLE,
    ENTRY_VAULT,
    ENTRY_FORCE_PULL,
    ENTRY_DROP_DOWN,
    ENTRY_TRANSITION,
    ENTRY_CINEMATIC,
};

