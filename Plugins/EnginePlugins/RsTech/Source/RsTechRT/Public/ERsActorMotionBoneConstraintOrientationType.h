#pragma once
#include "CoreMinimal.h"
#include "ERsActorMotionBoneConstraintOrientationType.generated.h"

UENUM(BlueprintType)
enum class ERsActorMotionBoneConstraintOrientationType : uint8 {
    AMBCOT_FREE_ORIENTATION,
    AMBCOT_LOCKED_ORIENATION,
    AMBCOT_IGNORE_ORIENTATION,
    AMBCOT_MAX UMETA(Hidden),
};

