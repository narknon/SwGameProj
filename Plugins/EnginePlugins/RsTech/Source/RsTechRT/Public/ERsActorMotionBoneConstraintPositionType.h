#pragma once
#include "CoreMinimal.h"
#include "ERsActorMotionBoneConstraintPositionType.generated.h"

UENUM(BlueprintType)
enum class ERsActorMotionBoneConstraintPositionType : uint8 {
    AMBCPT_POINT,
    AMBCPT_AXIS,
    AMBCPT_PLANE,
    AMBCPT_MAX UMETA(Hidden),
};

