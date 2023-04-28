#pragma once
#include "CoreMinimal.h"
#include "ESwPullConditionalType.generated.h"

UENUM(BlueprintType)
enum class ESwPullConditionalType : uint8 {
    None,
    WasInPullHold,
    WasNotInPullHold,
    Count,
};

