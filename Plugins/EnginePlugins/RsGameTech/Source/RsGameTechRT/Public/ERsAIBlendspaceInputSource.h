#pragma once
#include "CoreMinimal.h"
#include "ERsAIBlendspaceInputSource.generated.h"

UENUM(BlueprintType)
namespace ERsAIBlendspaceInputSource {
    enum Type {
        Custom,
        FocusYawPitch,
        FocusYaw,
        FocusPitch,
        FocusDistance,
        FocusDistance2D,
        VerticalDistanceToFocusHead,
    };
}

