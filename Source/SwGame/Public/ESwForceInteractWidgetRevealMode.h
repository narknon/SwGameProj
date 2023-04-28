#pragma once
#include "CoreMinimal.h"
#include "ESwForceInteractWidgetRevealMode.generated.h"

UENUM(BlueprintType)
enum class ESwForceInteractWidgetRevealMode : uint8 {
    OnlyDefault,
    None,
    All,
    Count,
};

