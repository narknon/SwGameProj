#pragma once
#include "CoreMinimal.h"
#include "ERsDamageEffectType.generated.h"

UENUM(BlueprintType)
enum class ERsDamageEffectType : uint8 {
    Damaged,
    Blocked,
    BlockBreak,
    ParryNeutral,
    Parried,
    Killed,
    NumDamageEffectTypes,
    NoDamageEffect,
};

