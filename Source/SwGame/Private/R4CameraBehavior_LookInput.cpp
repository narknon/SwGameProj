#include "R4CameraBehavior_LookInput.h"

float UR4CameraBehavior_LookInput::CalcYawRotationDelta(const FRsCameraInputs& Inputs) const {
    return 0.0f;
}

float UR4CameraBehavior_LookInput::CalcPitchRotationDelta(const FRsCameraInputs& Inputs) const {
    return 0.0f;
}

UR4CameraBehavior_LookInput::UR4CameraBehavior_LookInput() {
    this->ControllerLookInputScaleYaw = 180.00f;
    this->ControllerLookInputScalePitch = 120.00f;
    this->AcceleratedControllerInputScaleYaw = 180.00f;
    this->AcceleratedControllerInputScalePitch = 120.00f;
    this->MouseLookInputScaleYaw = 1.00f;
    this->MouseLookInputScalePitch = 1.00f;
}

