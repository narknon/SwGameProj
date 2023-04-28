#pragma once
#include "CoreMinimal.h"
#include "ERsBase.generated.h"

UENUM(BlueprintType)
enum class ERsBase : uint8 {
    LOCAL,
    PARENT,
    WORLD,
    COUNT,
    UNDEFINED,
};

