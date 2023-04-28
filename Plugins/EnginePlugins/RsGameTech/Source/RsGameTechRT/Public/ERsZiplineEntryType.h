#pragma once
#include "CoreMinimal.h"
#include "ERsZiplineEntryType.generated.h"

UENUM(BlueprintType)
enum class ERsZiplineEntryType : uint8 {
    NoEntry,
    Air,
    Ground,
};

