#pragma once
#include "CoreMinimal.h"
#include "ESwDestructibleActorParallelStateType.generated.h"

UENUM(BlueprintType)
enum class ESwDestructibleActorParallelStateType : uint8 {
    None,
    Default,
    FrontHit,
    BackHit,
    ForcePush,
    ForcePull,
    FirstHitComponents,
};

