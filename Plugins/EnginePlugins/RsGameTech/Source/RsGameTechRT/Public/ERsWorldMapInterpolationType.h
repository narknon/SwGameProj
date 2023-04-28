#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapInterpolationType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapInterpolationType : uint8 {
    None,
    HoverEnter,
    HoverExit,
    VisibilityEnter,
    VisibilityExit,
    Count,
};

