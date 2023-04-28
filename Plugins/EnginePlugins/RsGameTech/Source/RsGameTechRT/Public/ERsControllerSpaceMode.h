#pragma once
#include "CoreMinimal.h"
#include "ERsControllerSpaceMode.generated.h"

UENUM(BlueprintType)
enum class ERsControllerSpaceMode : uint8 {
    CS_HORIZONTAL_CAMERA_YAW,
    CS_CAMERA,
    CS_USER,
    CS_MAX UMETA(Hidden),
};

