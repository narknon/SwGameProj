#pragma once
#include "CoreMinimal.h"
#include "ESwDestructibleActorDamageCountMethod.generated.h"

UENUM(BlueprintType)
enum class ESwDestructibleActorDamageCountMethod : uint8 {
    DamagePoints,
    NumberOfHits,
};

