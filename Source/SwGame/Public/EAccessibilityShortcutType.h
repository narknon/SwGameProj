#pragma once
#include "CoreMinimal.h"
#include "EAccessibilityShortcutType.generated.h"

UENUM(BlueprintType)
enum class EAccessibilityShortcutType : uint8 {
    PhotoMode,
    HoloMap,
    AudioPing,
    SlowMode,
    OpenBinoculars,
    HighContrast,
    NavAssistPing,
};

