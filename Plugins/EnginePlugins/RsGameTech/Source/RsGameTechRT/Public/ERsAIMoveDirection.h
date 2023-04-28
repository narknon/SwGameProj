#pragma once
#include "CoreMinimal.h"
#include "ERsAIMoveDirection.generated.h"

UENUM(BlueprintType)
namespace ERsAIMoveDirection {
    enum Type {
        Towards,
        Away,
        Left,
        Right,
        Up,
        Down,
        None,
    };
}

