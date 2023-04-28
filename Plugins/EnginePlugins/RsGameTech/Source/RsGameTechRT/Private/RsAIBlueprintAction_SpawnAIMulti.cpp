#include "RsAIBlueprintAction_SpawnAIMulti.h"

URsAIBlueprintAction_SpawnAIMulti* URsAIBlueprintAction_SpawnAIMulti::SpawnAIMulti(UObject* WorldContextObject, const TArray<ARsAISpawner*>& Spawners, float SpawnDelay) {
    return NULL;
}

void URsAIBlueprintAction_SpawnAIMulti::ExecuteOnAllAISpawned(const TArray<ARsAICharacter*>& SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult) {
}

URsAIBlueprintAction_SpawnAIMulti::URsAIBlueprintAction_SpawnAIMulti() {
    // Null default object.
}

