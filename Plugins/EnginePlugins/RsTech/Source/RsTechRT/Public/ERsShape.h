#pragma once
#include "CoreMinimal.h"
#include "ERsShape.generated.h"

UENUM(BlueprintType)
enum class ERsShape : uint8 {
    POINT,
    PLANAR,
    COUNT,
    UNDEFINED,
};

