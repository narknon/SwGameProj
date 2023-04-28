#pragma once
#include "CoreMinimal.h"
#include "ERsAIPatrolSpawnPoint.generated.h"

UENUM(BlueprintType)
namespace ERsAIPatrolSpawnPoint {
    enum Type {
        ClosestPoint,
        StartPoint,
        SpawnPoint,
    };
}

