#pragma once
#include "CoreMinimal.h"
#include "ESwSlamEnterModifierType.generated.h"

UENUM(BlueprintType)
enum class ESwSlamEnterModifierType : uint8 {
    None,
    Struggle,
    StruggleInfinite,
    Stagger,
    Count,
};

