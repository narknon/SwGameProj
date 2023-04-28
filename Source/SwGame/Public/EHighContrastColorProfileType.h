#pragma once
#include "CoreMinimal.h"
#include "EHighContrastColorProfileType.generated.h"

UENUM(BlueprintType)
enum class EHighContrastColorProfileType : uint8 {
    HighContrastPlayer = 0x1C,
    HighContrastAllies,
    HighContrastHazards,
    HighContrastForce,
    HighContrastInteractables,
    HighContrastNavigation,
    End,
    Zeroth = 0x0,
    EHighContrastColorProfileType_MAX = 0x23,
};

