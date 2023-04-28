#pragma once
#include "CoreMinimal.h"
#include "ERsInfluenceLinearType.generated.h"

UENUM(BlueprintType)
enum class ERsInfluenceLinearType : uint8 {
    NONE,
    POSITION,
    VELOCITY,
    ACCELERATION,
    POSITION_TIME_REMAP,
};

