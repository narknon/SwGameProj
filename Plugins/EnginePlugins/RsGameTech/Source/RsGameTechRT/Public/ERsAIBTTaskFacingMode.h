#pragma once
#include "CoreMinimal.h"
#include "ERsAIBTTaskFacingMode.generated.h"

UENUM(BlueprintType)
enum class ERsAIBTTaskFacingMode : uint8 {
    NoChange,
    FaceTarget,
    FaceMoveDirection,
};

