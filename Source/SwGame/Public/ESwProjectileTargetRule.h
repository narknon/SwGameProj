#pragma once
#include "CoreMinimal.h"
#include "ESwProjectileTargetRule.generated.h"

UENUM(BlueprintType)
enum class ESwProjectileTargetRule : uint8 {
    RandomBone,
    ClosestBone,
};

