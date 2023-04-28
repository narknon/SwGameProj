#pragma once
#include "CoreMinimal.h"
#include "ERsStickInputProcessingResponseType.generated.h"

UENUM(BlueprintType)
enum class ERsStickInputProcessingResponseType : uint8 {
    None,
    Pow2,
    Pow3,
    Pow4,
    Pow5,
    Pow6,
    Pow7,
    Pow8,
    Count,
};

