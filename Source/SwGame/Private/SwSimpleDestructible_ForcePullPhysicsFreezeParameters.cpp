#include "SwSimpleDestructible_ForcePullPhysicsFreezeParameters.h"

FSwSimpleDestructible_ForcePullPhysicsFreezeParameters::FSwSimpleDestructible_ForcePullPhysicsFreezeParameters() {
    this->FreezePhysicsOnForceHold = false;
    this->FreezePhysicsLinearMovement = false;
    this->FreezePhysicsAngularMovement = false;
    this->TimeToFreezePhysicsOnForceHold = 0.00f;
    this->ControlBoneStartTime = 0.00f;
    this->ControlBoneFinishTime = 0.00f;
}

