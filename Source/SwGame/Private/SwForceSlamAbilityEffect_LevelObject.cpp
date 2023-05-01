#include "SwForceSlamAbilityEffect_LevelObject.h"

USwForceSlamAbilityEffect_LevelObject::USwForceSlamAbilityEffect_LevelObject() {
    this->HitGroundParticleToSpawn = NULL;
    this->SlamRaycastLength = 20000.00f;
    this->SlamDistanceCheck = 50.00f;
    this->SlamTimeoutTime = 1.50f;
}

