#pragma once
#include "CoreMinimal.h"
#include "ERsBreakSyncType.generated.h"

UENUM(BlueprintType)
enum ERsBreakSyncType {
    NoBreak,
    BreakInstance,
    BreakAll,
};

