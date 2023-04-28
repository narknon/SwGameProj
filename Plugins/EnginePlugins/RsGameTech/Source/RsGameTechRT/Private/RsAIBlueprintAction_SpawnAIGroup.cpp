#include "RsAIBlueprintAction_SpawnAIGroup.h"

URsAIBlueprintAction_SpawnAIGroup* URsAIBlueprintAction_SpawnAIGroup::SpawnAIGroup(UObject* WorldContextObject, const TArray<ARsAISpawner*>& Spawners, const FRsAISingleSpawnedDelegate& OnMemberSpawned, const FRsAIAllDiedDelegate& OnGroupDied, float SpawnDelay, float SpawnInterval) {
    return NULL;
}

void URsAIBlueprintAction_SpawnAIGroup::ExecuteOnSingleAISpawned(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult) {
}

void URsAIBlueprintAction_SpawnAIGroup::ExecuteOnAllAISpawned(const TArray<ARsAICharacter*>& SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult) {
}

URsAIBlueprintAction_SpawnAIGroup::URsAIBlueprintAction_SpawnAIGroup() {
    // Null default object.
}

