#pragma once
#include "CoreMinimal.h"
#include "ERsTopologyMode.generated.h"

UENUM(BlueprintType)
enum class ERsTopologyMode : uint8 {
    TOPOLOGY_UNSET,
    TOPOLOGY_IGNORE,
    TOPOLOGY_UNBOUND,
    TOPOLOGY_PROXIMITY,
    TOPOLOGY_CORRECTED,
    TOPOLOGY_VIOLATION,
    COUNT,
    UNDEFINED,
};

