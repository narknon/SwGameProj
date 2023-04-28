#pragma once
#include "CoreMinimal.h"
#include "ERsHolomapMode.generated.h"

UENUM(BlueprintType)
enum class ERsHolomapMode : uint8 {
    Roaming,
    HoloTable_NonInteractive,
    HoloTable_Interactive,
    InstantOpenRoaming,
    Cinematic,
};

