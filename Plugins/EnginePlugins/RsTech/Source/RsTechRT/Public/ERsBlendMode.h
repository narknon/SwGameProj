#pragma once
#include "CoreMinimal.h"
#include "ERsBlendMode.generated.h"

UENUM(BlueprintType)
enum class ERsBlendMode : uint8 {
    BM_Linear,
    BM_Square,
    BM_SquareRoot,
    BM_Sine,
    BM_MAX UMETA(Hidden),
};

