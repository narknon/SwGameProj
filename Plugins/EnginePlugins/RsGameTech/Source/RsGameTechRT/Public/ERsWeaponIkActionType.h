#pragma once
#include "CoreMinimal.h"
#include "ERsWeaponIkActionType.generated.h"

UENUM(BlueprintType)
enum class ERsWeaponIkActionType : uint8 {
    Defending,
    Locked,
};

