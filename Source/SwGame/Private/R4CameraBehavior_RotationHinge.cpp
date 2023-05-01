#include "R4CameraBehavior_RotationHinge.h"

UR4CameraBehavior_RotationHinge::UR4CameraBehavior_RotationHinge() {
    this->HingeLength = 400.00f;
    this->AccesibilityHingeLength = 400.00f;
    this->PitchSpeedFactor = 1.00f;
    this->YawSpeedFactor = 1.00f;
    this->PlayerInputDelay = 0.70f;
    this->RampInTime = 0.50f;
    this->bAdjustYaw = true;
    this->bAdjustPitch = true;
    this->bAttachToAnchorLocation = true;
    this->MinAutoPitch = -60.00f;
    this->MaxAutoPitch = 0.00f;
    this->TargetPitchMin = 0.00f;
    this->TargetPitchMax = 0.00f;
    this->DelayAfterDisablePitchMotionParmsDeactivated = 0.20f;
    this->bEnableAutoAdjustYawLimits = false;
    this->MinAutoYaw = -90.00f;
    this->MaxAutoYaw = 90.00f;
}

