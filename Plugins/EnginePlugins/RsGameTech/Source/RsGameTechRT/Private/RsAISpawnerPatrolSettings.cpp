#include "RsAISpawnerPatrolSettings.h"

FRsAISpawnerPatrolSettings::FRsAISpawnerPatrolSettings() {
    this->PatrolPath = NULL;
    this->PatrolSpawnPoint = ERsAIPatrolSpawnPoint::ClosestPoint;
    this->PatrolPathUsage = ERsAIPatrolPathUsage::OneTime;
    this->ScriptingModeWhenDone = ERsAIScriptingMode::None;
    this->bSetHomeLocationToEnd = false;
    this->bEnableCrowdAvoidance = false;
}

