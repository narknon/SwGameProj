#pragma once
#include "CoreMinimal.h"
#include "ESwSuperJumpEndChargeReason.generated.h"

UENUM(BlueprintType)
enum class ESwSuperJumpEndChargeReason : uint8 {
    ReleasedCharge,
    NotOnGround,
    TookDamage,
    Interrupted,
};

