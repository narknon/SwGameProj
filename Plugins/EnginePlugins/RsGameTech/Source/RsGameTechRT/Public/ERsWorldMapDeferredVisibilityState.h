#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapDeferredVisibilityState.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapDeferredVisibilityState : uint8 {
    None,
    DisableVisibility,
    EnableVisiblity,
    Count,
};

