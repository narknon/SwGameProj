#pragma once
#include "CoreMinimal.h"
#include "ERsDamageValueLevel.generated.h"

UENUM(BlueprintType)
enum class ERsDamageValueLevel : uint8 {
    dmg_Small,
    dmg_Medium,
    dmg_Large,
    dmg_XLarge,
    dmg_Extreme,
    dmg_Alt1,
    dmg_Alt2,
    NumDamageValueLevel,
};

