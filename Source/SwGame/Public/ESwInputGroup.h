#pragma once
#include "CoreMinimal.h"
#include "ESwInputGroup.generated.h"

UENUM(BlueprintType)
namespace ESwInputGroup {
    enum Type {
        All,
        Gamepad,
        Keyboard,
        Count,
    };
}

