#include "RsAISpawnerInstance.h"

FRsAISpawnerInstance::FRsAISpawnerInstance() {
    this->AssetRequestPriority = ERsAISpawnAssetRequestAsyncPriority::DEFAULT;
    this->MaxNumSpawned = 0;
    this->SpawnDelay = 0.00f;
    this->FramesToWaitForNavmesh = 0;
    this->NumDied = 0;
    this->bIsEnabled = false;
    this->bAllowSpawnOffNavMesh = false;
    this->bAdjustToGround = false;
    this->bInexpensiveCharacter = false;
    this->bLoadWithLevel = false;
}

