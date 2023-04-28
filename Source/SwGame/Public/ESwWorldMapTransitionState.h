#pragma once
#include "CoreMinimal.h"
#include "ESwWorldMapTransitionState.generated.h"

UENUM(BlueprintType)
enum class ESwWorldMapTransitionState : uint8 {
    None,
    OpeningTransition,
    StartTransition,
    InTransition,
    EndTransition,
    LoadingTransition,
    Count,
};

