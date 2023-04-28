#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToMobility.generated.h"

UENUM(BlueprintType)
enum class ESwCharacterNavToMobility : uint8 {
    Automatic,
    Static,
    Dynamic,
};

