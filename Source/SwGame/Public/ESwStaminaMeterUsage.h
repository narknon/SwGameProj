#pragma once
#include "CoreMinimal.h"
#include "ESwStaminaMeterUsage.generated.h"

UENUM(BlueprintType)
enum class ESwStaminaMeterUsage : uint8 {
    ConsumeImmediately,
    ConsumeOverTime,
};

