#pragma once
#include "CoreMinimal.h"
#include "ERsAnimEndPose.generated.h"

UENUM(BlueprintType)
enum class ERsAnimEndPose : uint8 {
    None,
    Front,
    Left,
    Right,
    Back,
};

