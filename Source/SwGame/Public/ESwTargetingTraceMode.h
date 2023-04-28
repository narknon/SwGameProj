#pragma once
#include "CoreMinimal.h"
#include "ESwTargetingTraceMode.generated.h"

UENUM(BlueprintType)
enum class ESwTargetingTraceMode : uint8 {
    None,
    Visibility,
    Obstructions,
};

