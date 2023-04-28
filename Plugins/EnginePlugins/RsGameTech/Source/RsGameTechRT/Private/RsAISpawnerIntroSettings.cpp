#include "RsAISpawnerIntroSettings.h"

FRsAISpawnerIntroSettings::FRsAISpawnerIntroSettings() {
    this->SpawnAnimation = NULL;
    this->ScriptingModeWhenDone = ERsAIScriptingMode::None;
    this->bLoop = false;
    this->bRandomizeStartTime = false;
    this->bWarpToLocation = false;
    this->bShouldPlayAlertReaction = false;
    this->bCancelOnAwarenessStateChange = false;
    this->bSpawnAggro = false;
    this->bSpawnAggroToPlayer = false;
    this->bSpawnFacingPlayer = false;
    this->bSpawnNoPhysicsNoCollision = false;
    this->bSpawnWithPhysicsNoCollision = false;
    this->bApplyRefAlignment = false;
    this->bHideBeforePlayingSpawnAnimation = false;
    this->bIgnoreSpawnAnimation = false;
}

