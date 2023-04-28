#include "RsPhysicalAnimationBoneParameters.h"

FRsPhysicalAnimationBoneParameters::FRsPhysicalAnimationBoneParameters() {
    this->BodyMode = FRsPhysicalAnimationBodyMode::None;
    this->GravityScale = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->PhysicsBlendWeight = 0.00f;
    this->IgnorePhysicsBlendWeightFromAnimationNotify = false;
    this->DisableAllCollisionResponses = false;
    this->DisableCollisionResponseIfOverlapsCollisions = false;
    this->TurnToKinematicBodyModeIfOverlapsCollisions = false;
    this->TurnToFreeBodyModeIfLinearDivergenceIsMoreThan = 0.00f;
    this->PhysicalMaterialToUse = NULL;
}

