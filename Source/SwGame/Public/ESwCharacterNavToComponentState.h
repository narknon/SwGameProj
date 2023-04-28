#pragma once
#include "CoreMinimal.h"
#include "ESwCharacterNavToComponentState.generated.h"

UENUM(BlueprintType)
enum class ESwCharacterNavToComponentState : uint8 {
    Idle,
    NavToInProgress,
};

