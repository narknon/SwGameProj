#pragma once
#include "CoreMinimal.h"
#include "ERsQueueActionCheckResult.generated.h"

UENUM(BlueprintType)
enum class ERsQueueActionCheckResult : uint8 {
    WontDoAction,
    MightDoAction,
    WillDoAction,
};

