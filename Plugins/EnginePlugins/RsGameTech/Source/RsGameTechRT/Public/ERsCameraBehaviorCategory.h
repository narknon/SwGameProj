#pragma once
#include "CoreMinimal.h"
#include "ERsCameraBehaviorCategory.generated.h"

UENUM(BlueprintType)
enum class ERsCameraBehaviorCategory : uint8 {
    POV,
    Accessibility,
    Collision,
};

