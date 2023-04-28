#pragma once
#include "CoreMinimal.h"
#include "ESwDestructibleActorIntendedUsage.generated.h"

UENUM(BlueprintType)
enum class ESwDestructibleActorIntendedUsage : uint8 {
    Standard,
    Foliage,
    FoliageNonDestructible,
};

