#pragma once
#include "CoreMinimal.h"
#include "ESwLightsaberMarksState.generated.h"

UENUM(BlueprintType)
enum class ESwLightsaberMarksState : uint8 {
    Idle,
    Tracing,
    Hit,
    Processing,
};

