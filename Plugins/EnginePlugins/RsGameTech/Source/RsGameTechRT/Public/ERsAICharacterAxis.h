#pragma once
#include "CoreMinimal.h"
#include "ERsAICharacterAxis.generated.h"

UENUM(BlueprintType)
namespace ERsAICharacterAxis {
    enum Type {
        Forward,
        Left,
        Right,
        Backward,
        None,
    };
}

