#pragma once
#include "CoreMinimal.h"
#include "ERsAIStrafeDirection.generated.h"

UENUM(BlueprintType)
namespace ERsAIStrafeDirection {
    enum Type {
        Left,
        Right,
        Random,
    };
}

