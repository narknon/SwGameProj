#pragma once
#include "CoreMinimal.h"
#include "ERsCameraAutoAdjustRequest.generated.h"

UENUM(BlueprintType)
enum class ERsCameraAutoAdjustRequest : uint8 {
    None,
    DefendOrDamaged,
    ProjectileDefendOrDamaged,
    AttackHit,
    AttackBegin,
};

