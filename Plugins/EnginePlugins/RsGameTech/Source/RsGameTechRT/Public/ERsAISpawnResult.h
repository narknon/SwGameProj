#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.generated.h"

UENUM(BlueprintType)
namespace ERsAISpawnResult {
    enum Type {
        Spawned,
        OffNavmesh,
        SpawnedMax,
        PendingKill,
        Failed,
    };
}

