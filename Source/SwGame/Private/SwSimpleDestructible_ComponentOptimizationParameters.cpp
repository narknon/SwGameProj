#include "SwSimpleDestructible_ComponentOptimizationParameters.h"

FSwSimpleDestructible_ComponentOptimizationParameters::FSwSimpleDestructible_ComponentOptimizationParameters() {
    this->HideBoneOnFirstCollision = false;
    this->HideBoneAfterNumberCollisionHits = 0;
    this->ParticleToSpawnAfterHidingBone = NULL;
    this->SpawnOnlyEveryNthParticle = 0;
    this->MinimumTimeBetweenSpawningParticles = 0.00f;
    this->TimeToHideAllBonesAndDeactivateComponent = 0.00f;
    this->HideComponentAfterDeactivation = false;
    this->DisableAllCollisionsAfterDeactivation = false;
}

