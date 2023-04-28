#pragma once
#include "CoreMinimal.h"
#include "ERsPSOCachePrecompileMode.generated.h"

UENUM(BlueprintType)
enum class ERsPSOCachePrecompileMode : uint8 {
    Disabled,
    Background,
    ActivePrecompile,
    Count,
};

