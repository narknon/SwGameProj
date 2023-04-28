#pragma once
#include "CoreMinimal.h"
#include "ESwLiftSlamAnimationType.generated.h"

UENUM(BlueprintType)
enum class ESwLiftSlamAnimationType : uint8 {
    OneHanded,
    TwoHanded,
    Count,
};

