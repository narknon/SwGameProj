#pragma once
#include "CoreMinimal.h"
#include "ESwSuperJumpState.generated.h"

UENUM(BlueprintType)
enum class ESwSuperJumpState : uint8 {
    NotChargingOrJumping,
    ChargeBegan,
    ChargeComplete,
    JumpAscent,
    JumpDescent,
};

