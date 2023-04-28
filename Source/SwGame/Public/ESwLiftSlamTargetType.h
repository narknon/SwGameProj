#pragma once
#include "CoreMinimal.h"
#include "ESwLiftSlamTargetType.generated.h"

UENUM(BlueprintType)
enum class ESwLiftSlamTargetType : uint8 {
    None,
    LevelObject,
    LevelObjectOverriden,
    AnalogLevelObject,
    Character,
    CharacterOverriden,
    Count,
};

