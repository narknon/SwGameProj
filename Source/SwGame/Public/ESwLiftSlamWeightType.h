#pragma once
#include "CoreMinimal.h"
#include "ESwLiftSlamWeightType.generated.h"

UENUM(BlueprintType)
enum class ESwLiftSlamWeightType : uint8 {
    Normal,
    Heavy,
    Count,
};

