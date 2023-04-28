#include "RsAISpawningSystem.h"

void URsAISpawningSystem::UnbindEventFromAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const FRsAIOnAISpawnedDelegate& Event) {
}

void URsAISpawningSystem::UnbindAllEventsFromAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef) {
}

void URsAISpawningSystem::UnbindAllEventsFromAIDespawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef) {
}

void URsAISpawningSystem::UnbindAllAISpawnedEventsMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners) {
}

void URsAISpawningSystem::UnbindAllAIDespawnedEventsMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners) {
}

void URsAISpawningSystem::UnbindAISpawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAISpawnedDelegate& Event) {
}

void URsAISpawningSystem::UnbindAIDespawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAIDespawnedDelegate& Event) {
}

void URsAISpawningSystem::SpawnAIForArray(UObject* WorldContext, const TArray<FRsAISpawnerRef>& SpawnerRefs, float SpawnDelay) {
}

void URsAISpawningSystem::SpawnAI_Internal(UObject* WorldContext, FLatentActionInfo LatentInfo, const FRsAIOnAISpawnedDelegate& OnAISpawned, const FRsAISpawnerRef& SpawnerRef, float SpawnDelay) {
}

void URsAISpawningSystem::OnSpawnedAIDied(AActor* DeadActor) {
}

void URsAISpawningSystem::OnSpawnedAIDestroyed(AActor* DestroyedActor) {
}

void URsAISpawningSystem::EnableSpawnerMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, bool bEnabled) {
}

void URsAISpawningSystem::DespawnAllAI(UObject* WorldContext, TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason) {
}

void URsAISpawningSystem::DespawnAIMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason) {
}

void URsAISpawningSystem::DebugSpawnAI(UObject* WorldContext, URsAICharacterDefinition* AICharacterDefinition, const FRsAISingleSpawnedDelegate& OnAISpawnedDelegate) {
}

void URsAISpawningSystem::BindEventToAISpawnedForArray(UObject* WorldContext, const TArray<FRsAISpawnerRef>& SpawnerRefs, const FRsAIOnAISpawnedDelegate& Event) {
}

void URsAISpawningSystem::BindEventToAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const FRsAIOnAISpawnedDelegate& Event) {
}

void URsAISpawningSystem::BindEventToAIDespawnedForArray(UObject* WorldContext, const TArray<FRsAISpawnerRef>& SpawnerRefs, const FRsAIOnAIDespawnedDelegate& Event) {
}

void URsAISpawningSystem::BindEventToAIDespawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const FRsAIOnAIDespawnedDelegate& Event) {
}

void URsAISpawningSystem::BindAISpawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAISpawnedDelegate& Event) {
}

void URsAISpawningSystem::BindAIDespawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAIDespawnedDelegate& Event) {
}

URsAISpawningSystem::URsAISpawningSystem() {
    // Null default object.
}

