#pragma once
#include "CoreMinimal.h"
#include "ERsQuadrant.generated.h"

UENUM(BlueprintType)
enum class ERsQuadrant : uint8 {
    Center,
    TopRight,
    TopLeft,
    BottomLeft,
    BottomRight,
    None,
};

