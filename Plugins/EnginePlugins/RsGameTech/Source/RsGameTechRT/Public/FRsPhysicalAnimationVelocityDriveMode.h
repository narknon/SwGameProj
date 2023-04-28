#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationVelocityDriveMode.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationVelocityDriveMode : uint8 {
    None,
    Default,
    Standard,
    Always,
};

