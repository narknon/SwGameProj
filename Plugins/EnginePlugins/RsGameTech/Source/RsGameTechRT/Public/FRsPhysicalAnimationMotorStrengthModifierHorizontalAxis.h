#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis.generated.h"

UENUM(BlueprintType)
enum class FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis : uint8 {
    None,
    JointCurrentAngle,
    JointCurrentRelativeVelocity,
    PlaybackTime,
};

