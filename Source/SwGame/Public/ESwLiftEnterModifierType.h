#pragma once
#include "CoreMinimal.h"
#include "ESwLiftEnterModifierType.generated.h"

UENUM(BlueprintType)
enum class ESwLiftEnterModifierType : uint8 {
    None,
    Struggle,
    StruggleInfinite,
    Stagger,
    Count,
};

