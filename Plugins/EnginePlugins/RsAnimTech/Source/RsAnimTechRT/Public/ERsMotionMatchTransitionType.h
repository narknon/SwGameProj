#pragma once
#include "CoreMinimal.h"
#include "ERsMotionMatchTransitionType.generated.h"

UENUM(BlueprintType)
enum class ERsMotionMatchTransitionType : uint8 {
    StandardBlend,
    Inertialization,
};

