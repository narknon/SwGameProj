#pragma once
#include "CoreMinimal.h"
#include "ERsCameraDitherDepthFixupMode.generated.h"

UENUM(BlueprintType)
enum class ERsCameraDitherDepthFixupMode : uint8 {
    Disabled,
    DepthOnly,
    StencilOnly,
    Enabled,
};

