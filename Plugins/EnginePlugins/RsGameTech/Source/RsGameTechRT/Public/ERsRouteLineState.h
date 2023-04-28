#pragma once
#include "CoreMinimal.h"
#include "ERsRouteLineState.generated.h"

UENUM(BlueprintType)
enum class ERsRouteLineState : uint8 {
    Disabled,
    Active,
    BuildOff,
};

