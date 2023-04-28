#pragma once
#include "CoreMinimal.h"
#include "ESwPullAimType.generated.h"

UENUM(BlueprintType)
enum class ESwPullAimType : uint8 {
    None,
    ToVictim,
    ToCamera,
    Count,
};

