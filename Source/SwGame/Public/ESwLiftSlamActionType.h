#pragma once
#include "CoreMinimal.h"
#include "ESwLiftSlamActionType.generated.h"

UENUM(BlueprintType)
enum class ESwLiftSlamActionType : uint8 {
    None,
    Lift,
    Slam,
    Count,
};

