#pragma once
#include "CoreMinimal.h"
#include "ERsRumorState.generated.h"

UENUM(BlueprintType)
enum class ERsRumorState : uint8 {
    None,
    Enter,
    Idle,
    Exit,
    Pending,
    PendingRemoval,
    Count,
};

