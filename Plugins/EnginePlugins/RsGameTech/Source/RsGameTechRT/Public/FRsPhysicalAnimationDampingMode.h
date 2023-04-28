#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationDampingMode.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationDampingMode : uint8 {
    None,
    Gradual,
};

