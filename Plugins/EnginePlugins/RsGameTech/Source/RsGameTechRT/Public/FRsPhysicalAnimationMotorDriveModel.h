#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationMotorDriveModel.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationMotorDriveModel : uint8 {
    None,
    Default,
    Standard,
    UseDriveProfile,
};

