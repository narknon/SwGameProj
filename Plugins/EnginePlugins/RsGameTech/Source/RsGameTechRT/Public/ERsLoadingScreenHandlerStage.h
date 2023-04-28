#pragma once
#include "CoreMinimal.h"
#include "ERsLoadingScreenHandlerStage.generated.h"

UENUM(BlueprintType)
enum class ERsLoadingScreenHandlerStage : uint8 {
    WaitingToStartLoad,
    WaitingForLoadToFinish,
    WaitingForStreamingFlush,
    WaitingForScreenToComplete,
    Completed,
};

