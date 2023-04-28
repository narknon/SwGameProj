#pragma once
#include "CoreMinimal.h"
#include "ESwProjectileReflectionResult.generated.h"

UENUM(BlueprintType)
enum class ESwProjectileReflectionResult : uint8 {
    NoInteraction,
    Reflected,
    Deflected,
};

