#pragma once
#include "CoreMinimal.h"
#include "ERsHitImpulseType.generated.h"

UENUM(BlueprintType)
enum class ERsHitImpulseType : uint8 {
    HitImpulse_Damage,
    HitImpulse_Block,
    HitImpulse_ParryNeutral,
    HitImpulse_Count,
    HitImpulse_MAX UMETA(Hidden),
};

