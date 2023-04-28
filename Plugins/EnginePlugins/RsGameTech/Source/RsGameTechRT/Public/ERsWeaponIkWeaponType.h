#pragma once
#include "CoreMinimal.h"
#include "ERsWeaponIkWeaponType.generated.h"

UENUM(BlueprintType)
enum class ERsWeaponIkWeaponType : uint8 {
    TwoHanded,
    SingleHandedLeft,
    SingleHandedRight,
    DoubleBladedLeft,
    DoubleBladedRight,
    TwoHandedBetweenHands,
};

