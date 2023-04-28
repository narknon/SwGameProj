#pragma once
#include "CoreMinimal.h"
#include "ESwDirectionFacing.generated.h"

UENUM(BlueprintType)
enum class ESwDirectionFacing : uint8 {
    CameraFacing,
    StickFacing,
    AITargetFacing,
    HybridFacing,
};

