#include "SwAnimNotify_ShootBlasterBegin.h"

USwAnimNotify_ShootBlasterBegin::USwAnimNotify_ShootBlasterBegin() {
    this->bFireAlternativeBlasterType = false;
    this->bCanShotDuringForceSlow = true;
    this->AccuracyOverrideMode = ERsAIShotAccuracyOverrideMode::None;
    this->ShootingConeHalfAngle = 30.00f;
}

