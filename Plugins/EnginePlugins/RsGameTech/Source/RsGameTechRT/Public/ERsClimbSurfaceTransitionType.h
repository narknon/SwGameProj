#pragma once
#include "CoreMinimal.h"
#include "ERsClimbSurfaceTransitionType.generated.h"

UENUM(BlueprintType)
enum class ERsClimbSurfaceTransitionType : uint8 {
    Direct,
    Jump,
};

