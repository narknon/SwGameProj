#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapInterpolationTrackType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapInterpolationTrackType : uint8 {
    None,
    Hover,
    Visibility,
    Count,
};

