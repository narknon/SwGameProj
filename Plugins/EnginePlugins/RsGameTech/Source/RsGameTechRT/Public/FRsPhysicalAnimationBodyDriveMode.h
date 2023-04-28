#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationBodyDriveMode.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationBodyDriveMode : uint8 {
    None,
    Motor,
    Constraint,
    Velocity,
    LinearVelocityAngularConstraint,
};

