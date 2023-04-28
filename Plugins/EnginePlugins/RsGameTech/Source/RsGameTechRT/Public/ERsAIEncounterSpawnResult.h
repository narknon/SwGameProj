#pragma once
#include "CoreMinimal.h"
#include "ERsAIEncounterSpawnResult.generated.h"

UENUM(BlueprintType)
enum ERsAIEncounterSpawnResult {
    FullySpawned,
    PartiallySpawned,
    NotSpawned,
};

