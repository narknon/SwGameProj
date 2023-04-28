#include "SwGardenSeedSpawner.h"

void ASwGardenSeedSpawner::UpdateGardenSeedSpawnerDataAsset(USwGardenSeedSpawnerData* SpawnerDataAsset, TArray<FSwGardenSeedFoliageInfo> SeedSpawnInfo, bool bClearPreviousData) {
}

void ASwGardenSeedSpawner::SwapFoliageInstancesInVolume(UFoliageType* OriginalFoliageType, UFoliageType* ReplacementFoliageType, FBox BoxExtents, bool bBoxExtentsInWorldSpace) {
}

void ASwGardenSeedSpawner::SpawnBackupRegisteredPlant() {
}

void ASwGardenSeedSpawner::ReplaceSingleFoliageInstance(const AInstancedFoliageActor* InstancedFoliageActor, const UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent, int32 FoliageIndex, const UFoliageType* ReplacementFoliageType) {
}

bool ASwGardenSeedSpawner::HasFoliageInstanceOverlap(float ActorRadius) {
    return false;
}

UStaticMesh* ASwGardenSeedSpawner::GetStaticMeshFromFoliageType(UFoliageType_InstancedStaticMesh* FoliageType) {
    return NULL;
}

UFoliageInstancedStaticMeshComponent* ASwGardenSeedSpawner::FindOrAddFoliageStaticMeshComponent(const AInstancedFoliageActor* InstancedFoliageActor, const UFoliageType_InstancedStaticMesh* StaticMeshFoliageType) {
    return NULL;
}

UFoliageInstancedStaticMeshComponent* ASwGardenSeedSpawner::FindFoliageStaticMeshComponent(const AInstancedFoliageActor* InstancedFoliageActor, const UFoliageType_InstancedStaticMesh* StaticMeshFoliageType) {
    return NULL;
}

UFoliageInstancedStaticMeshComponent* ASwGardenSeedSpawner::AddFoliageStaticMeshComponent(const AInstancedFoliageActor* InstancedFoliageActor, const UFoliageType_InstancedStaticMesh* StaticMeshFoliageType) {
    return NULL;
}

ASwGardenSeedSpawner::ASwGardenSeedSpawner() {
    // Null default object.
}

