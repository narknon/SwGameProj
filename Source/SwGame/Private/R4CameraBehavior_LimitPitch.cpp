#include "R4CameraBehavior_LimitPitch.h"

UR4CameraBehavior_LimitPitch::UR4CameraBehavior_LimitPitch() {
    this->PitchMin = -70.00f;
    this->PitchMax = 70.00f;
    this->InitialPitch = 0.00f;
    this->EndPitch = 0.00f;
    this->bEnableInitialPitch = false;
    this->bInitialPitchRelative = false;
    this->bEnableEndPitch = false;
    this->bEndPitchRelative = false;
}

