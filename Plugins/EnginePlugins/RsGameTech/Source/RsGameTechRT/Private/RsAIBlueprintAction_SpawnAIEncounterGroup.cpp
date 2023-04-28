#include "RsAIBlueprintAction_SpawnAIEncounterGroup.h"

URsAIBlueprintAction_SpawnAIEncounterGroup* URsAIBlueprintAction_SpawnAIEncounterGroup::SpawnAIEncounterGroup(UObject* WorldContextObject, ARsAIEncounterGroup* EncounterGroup, const FRsAISingleSpawnedDelegate& OnMemberSpawned) {
    return NULL;
}

void URsAIBlueprintAction_SpawnAIEncounterGroup::ExecuteOnSingleAISpawned(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult) {
}

void URsAIBlueprintAction_SpawnAIEncounterGroup::ExecuteOnEncounterGroupSpawnComplete(ARsAIEncounterGroup* InEncounterGroup) {
}

URsAIBlueprintAction_SpawnAIEncounterGroup::URsAIBlueprintAction_SpawnAIEncounterGroup() {
    // Null default object.
}

