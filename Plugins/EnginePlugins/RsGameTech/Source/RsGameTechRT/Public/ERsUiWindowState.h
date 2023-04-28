#pragma once
#include "CoreMinimal.h"
#include "ERsUiWindowState.generated.h"

UENUM(BlueprintType)
enum class ERsUiWindowState : uint8 {
    Hidden,
    PendingOpen,
    Open,
    Minimized,
};

