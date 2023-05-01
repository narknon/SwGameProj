#include "SwForceLiftAbilityEffect_LevelObject.h"

USwForceLiftAbilityEffect_LevelObject::USwForceLiftAbilityEffect_LevelObject() {
    this->DefaultLiftAccelerationCurve = NULL;
    this->LiftHeightRaycastSocketName = TEXT("LiftHeightRaycastSocket");
    this->ParticleToSpawn = NULL;
}

