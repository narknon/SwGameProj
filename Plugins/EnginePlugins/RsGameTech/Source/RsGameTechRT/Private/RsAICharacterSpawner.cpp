#include "RsAICharacterSpawner.h"

void ARsAICharacterSpawner::SetSpawnerWanderSettings(FRsAISpawnerWanderSettings SpawnerWanderSettings) {
}

void ARsAICharacterSpawner::SetSpawnerScriptingSettings(FRsAIScriptingOptions SpawnerScriptingSettings) {
}

void ARsAICharacterSpawner::SetSpawnerPOISettings(FRsAISpawnerPOISettings SpawnerPOISettings) {
}

void ARsAICharacterSpawner::SetSpawnerPatrolSettings(FRsAISpawnerPatrolSettings SpawnerPatrolSettings) {
}

void ARsAICharacterSpawner::SetSpawnerNarrativeSettings(FRsAISpawnerNarrativeSettings SpawnerNarrativeSettings) {
}

void ARsAICharacterSpawner::SetSpawnerIntroSettings(FRsAISpawnerIntroSettings SpawnerIntroSettings) {
}

void ARsAICharacterSpawner::SetSpawnerIKRigSettings(FRsAISpawnerIKRigSettings SpawnerIKRigSettings) {
}

void ARsAICharacterSpawner::SetSpawnerAdvancedSettings(bool bAutoSpawn, FName GroupName, FName OverrideSyncSlotName, int32 SpawnMax, float SpawnDelay, bool bEnabled, bool bAllowSpawnOffNavMesh) {
}

void ARsAICharacterSpawner::SetLeashSettings(FRsAISpawnerLeashSettings SpawnerLeashSettings) {
}

FRsAISpawnerNarrativeSettings ARsAICharacterSpawner::GetSpawnerNarrativeSettings() {
    return FRsAISpawnerNarrativeSettings{};
}

FRsAISpawnerIntroSettings ARsAICharacterSpawner::GetSpawnerIntroSettings() {
    return FRsAISpawnerIntroSettings{};
}

FRsAISpawnerIKRigSettings ARsAICharacterSpawner::GetSpawnerIKRigSettings() {
    return FRsAISpawnerIKRigSettings{};
}

void ARsAICharacterSpawner::GetSpawnerAdvancedSettings(bool& bAutoSpawn, FName& GroupName, FName& OverrideSyncSlotName, int32& SpawnMax, float& SpawnDelay, bool& bEnabled, bool& bAllowSpawnOffNavMesh) {
}

TArray<ARsAICharacter*> ARsAICharacterSpawner::GetSpawnedAI() const {
    return TArray<ARsAICharacter*>();
}

ARsAICharacter* ARsAICharacterSpawner::GetFirstCurrentlySpawnedAI() const {
    return NULL;
}

ARsAICharacterSpawner::ARsAICharacterSpawner() {
    // Null default object.
}

