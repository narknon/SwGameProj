#pragma once
#include "CoreMinimal.h"
#include "ERsZiplineAnimationState.generated.h"

UENUM(BlueprintType)
enum class ERsZiplineAnimationState : uint8 {
    NotAttached,
    Entering,
    Attached,
};

