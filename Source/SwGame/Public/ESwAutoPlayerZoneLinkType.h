#pragma once
#include "CoreMinimal.h"
#include "ESwAutoPlayerZoneLinkType.generated.h"

UENUM()
enum class ESwAutoPlayerZoneLinkType : int32 {
    Normal,
    Teleport,
    Elevator,
    Walk,
    Jump,
};

