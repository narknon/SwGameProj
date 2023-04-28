#pragma once
#include "CoreMinimal.h"
#include "ERsClimbEntryType.generated.h"

UENUM(BlueprintType)
enum class ERsClimbEntryType : uint8 {
    NO_ENTRY,
    ENTRY_AUTO_ATTACH,
    ENTRY_AUTO_ATTACH_UNCONFIRMED,
    ENTRY_GRAB,
    ENTRY_FORCE_PULL,
    ENTRY_TRANSITION,
    ENTRY_SKIP,
};

