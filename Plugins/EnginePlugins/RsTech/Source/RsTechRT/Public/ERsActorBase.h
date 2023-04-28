#pragma once
#include "CoreMinimal.h"
#include "ERsActorBase.generated.h"

UENUM(BlueprintType)
enum class ERsActorBase : uint8 {
    USE_TOPOLOGY,
    USE_BUMPER,
    USE_CUSTOM,
    USE_MAX UMETA(Hidden),
};

