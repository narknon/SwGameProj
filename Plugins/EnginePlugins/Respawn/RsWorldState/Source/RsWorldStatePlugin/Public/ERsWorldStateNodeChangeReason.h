#pragma once
#include "CoreMinimal.h"
#include "ERsWorldStateNodeChangeReason.generated.h"

UENUM(BlueprintType)
enum class ERsWorldStateNodeChangeReason : uint8 {
    StateChanged,
    StateLoaded,
    Debug,
};

