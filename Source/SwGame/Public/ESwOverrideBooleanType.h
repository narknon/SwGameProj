#pragma once
#include "CoreMinimal.h"
#include "ESwOverrideBooleanType.generated.h"

UENUM(BlueprintType)
enum class ESwOverrideBooleanType : uint8 {
    DontOverride,
    OverrideFalse,
    OverrideTrue,
    Count,
};

