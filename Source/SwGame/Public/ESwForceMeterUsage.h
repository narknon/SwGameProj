#pragma once
#include "CoreMinimal.h"
#include "ESwForceMeterUsage.generated.h"

UENUM(BlueprintType)
enum class ESwForceMeterUsage : uint8 {
    ConsumeImmediately,
    ConsumeOverTime,
};

