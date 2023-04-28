#include "RsPhysicalAnimationNotifyParameters.h"

FRsPhysicalAnimationNotifyParameters::FRsPhysicalAnimationNotifyParameters() {
    this->ModifyVelocityDriveStrength = false;
    this->VelocityDriveStrength = 0.00f;
    this->ModifyPhysicsBlendWeight = false;
    this->PhysicsBlendWeight = 0.00f;
    this->PhysicsBlendWeightFadeInTime = 0.00f;
    this->PhysicsBlendWeightFadeOutTime = 0.00f;
}

