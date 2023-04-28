#include "SwSimpleDestructible_PhasePhysicsParameters.h"

FSwSimpleDestructible_PhasePhysicsParameters::FSwSimpleDestructible_PhasePhysicsParameters() {
    this->PhysicsLinearImpulseStrength = 0.00f;
    this->PhysicsLinearImpulseRandomVariation = 0.00f;
    this->PhysicsAngularImpulseStrength = 0.00f;
    this->PhysicsAngularImpulseRandomVariation = 0.00f;
    this->StartPhysicsAtTheEndOfAnimation = false;
    this->StartPhysicsOnAttachedComponents = false;
    this->InheritInitialVelocityFromParentComponent = false;
    this->DirectionalHitImpulseStrength = 0.00f;
}

