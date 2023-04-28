#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapRumorVisibilityState.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapRumorVisibilityState : uint8 {
    NotVisible,
    Untracked,
    Tracked,
    Count,
};

