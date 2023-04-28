#include "RsAIBlueprintAction_SpawnAI.h"

URsAIBlueprintAction_SpawnAI* URsAIBlueprintAction_SpawnAI::SpawnAI(ARsAISpawner* Spawner, float SpawnDelay) {
    return NULL;
}

void URsAIBlueprintAction_SpawnAI::ExecuteOnAllAISpawned(const TArray<ARsAICharacter*>& SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult) {
}

URsAIBlueprintAction_SpawnAI::URsAIBlueprintAction_SpawnAI() {
    // Null default object.
}

