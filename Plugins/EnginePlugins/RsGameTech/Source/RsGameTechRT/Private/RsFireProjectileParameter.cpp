#include "RsFireProjectileParameter.h"

FRsFireProjectileParameter::FRsFireProjectileParameter() {
    this->bFireAlternateProjectileType = false;
    this->bCanShootDuringForceSlow = false;
    this->ShotAccuracyOverrideMode = ERsAIShotAccuracyOverrideMode::None;
    this->ShootingConeHalfAngle = 0.00f;
}

