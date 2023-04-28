#pragma once
#include "CoreMinimal.h"
#include "ERsIkBoneType.generated.h"

UENUM(BlueprintType)
enum class ERsIkBoneType : uint8 {
    LeftFoot,
    RightFoot,
    BackLeftFoot,
    BackRightFoot,
    LeftHand,
    RightHand,
};

