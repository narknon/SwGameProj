#pragma once
#include "CoreMinimal.h"
#include "ESwDFXState.generated.h"

UENUM(BlueprintType)
enum class ESwDFXState : uint8 {
    Idle,
    StartAttack,
    Update,
    FinishAttack,
};

