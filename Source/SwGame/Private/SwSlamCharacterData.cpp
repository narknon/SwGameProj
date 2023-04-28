#include "SwSlamCharacterData.h"

FSwSlamCharacterData::FSwSlamCharacterData() {
    this->SlamInitialVelocity = 0.00f;
    this->SlamMaxVelocity = 0.00f;
    this->SlamGravity = 0.00f;
    this->SlamDamage = 0.00f;
    this->SlamDamageType = NULL;
    this->SlamDamageTypeInst = NULL;
    this->SlamDamageTypeAsset = NULL;
    this->SlamFloorLoopDuration = 0.00f;
    this->SlamRaycastLength = 0.00f;
    this->SlamRaycastTestThreshold = 0.00f;
    this->bEnableCollisionBasedLoopFinishTest = false;
    this->bShouldHavePawnEnableCollisionBasedFallback = false;
}

