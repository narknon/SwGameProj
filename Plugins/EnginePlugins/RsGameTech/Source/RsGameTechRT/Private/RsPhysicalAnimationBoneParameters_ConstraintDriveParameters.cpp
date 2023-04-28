#include "RsPhysicalAnimationBoneParameters_ConstraintDriveParameters.h"

FRsPhysicalAnimationBoneParameters_ConstraintDriveParameters::FRsPhysicalAnimationBoneParameters_ConstraintDriveParameters() {
    this->ConstraintDriveIsEnabled = false;
    this->FreeLinearMovement = false;
    this->FreeAngularMovement = false;
    this->EnableVariableConstraintLimits = false;
    this->UseSmoothedVelocities = false;
    this->DebugDrawMotorLimits = false;
    this->DebugLogVelocity = false;
    this->LinearVelocityMin = 0.00f;
    this->LinearVelocityMax = 0.00f;
    this->ConstraintLimitForVelocityMin = 0.00f;
    this->ConstraintLimitForVelocityMax = 0.00f;
}

