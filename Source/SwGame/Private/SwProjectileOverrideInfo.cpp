#include "SwProjectileOverrideInfo.h"

FSwProjectileOverrideInfo::FSwProjectileOverrideInfo() {
    this->ProjectileType = NULL;
    this->NumShotsToMissWhenShotOffScreen = 0;
    this->bOverrideOffScreenAccuracy = false;
    this->ChanceToMissWhenShotOffScreen = 0.00f;
    this->bUseConsecutiveShots = false;
    this->MaxNumConsecutiveShots = 0;
    this->ChanceOfConsecutiveShot = 0.00f;
}

