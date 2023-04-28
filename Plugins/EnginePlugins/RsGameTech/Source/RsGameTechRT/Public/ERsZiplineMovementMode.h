#pragma once
#include "CoreMinimal.h"
#include "ERsZiplineMovementMode.generated.h"

UENUM(BlueprintType)
enum class ERsZiplineMovementMode : uint8 {
    Normal,
    Braking,
    Boosting,
};

