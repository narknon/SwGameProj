#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationBodyMode.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationBodyMode : uint8 {
    None,
    Kinematic,
    Free,
    PhysicalAnimationDrive,
};

