#pragma once
#include "CoreMinimal.h"
#include "ERsMotionAimDirectionMode.generated.h"

UENUM(BlueprintType)
enum class ERsMotionAimDirectionMode : uint8 {
    UseTweak,
    FollowIntentDirection,
    UserAiming,
};

