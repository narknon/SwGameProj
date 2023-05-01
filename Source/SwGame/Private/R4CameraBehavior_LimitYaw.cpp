#include "R4CameraBehavior_LimitYaw.h"

UR4CameraBehavior_LimitYaw::UR4CameraBehavior_LimitYaw() {
    this->YawMin = 0.00f;
    this->YawMax = 0.00f;
    this->bRelativeYaw = false;
}

