#pragma once
#include "CoreMinimal.h"
#include "ESwProjectileReflectionMode.generated.h"

UENUM(BlueprintType)
enum class ESwProjectileReflectionMode : uint8 {
    ReflectTowardsShooter,
    ReflectTowardsZTargetingActor,
};

