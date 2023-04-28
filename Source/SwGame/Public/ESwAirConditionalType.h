#pragma once
#include "CoreMinimal.h"
#include "ESwAirConditionalType.generated.h"

UENUM(BlueprintType)
enum class ESwAirConditionalType : uint8 {
    None,
    InAir,
    OnGround,
    Count,
};

