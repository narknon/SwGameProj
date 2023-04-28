#pragma once
#include "CoreMinimal.h"
#include "ESwSlowConditionalType.generated.h"

UENUM(BlueprintType)
enum class ESwSlowConditionalType : uint8 {
    None,
    InSlow,
    NotInSlow,
    Count,
};

