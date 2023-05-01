#include "R4CameraBehavior_LookInputZoom.h"

UR4CameraBehavior_LookInputZoom::UR4CameraBehavior_LookInputZoom() {
    this->ZoomControllerLookInputScaleYaw = 180.00f;
    this->ZoomControllerLookInputScalePitch = 120.00f;
    this->ZoomAcceleratedControllerInputScaleYaw = 180.00f;
    this->ZoomAcceleratedControllerInputScalePitch = 120.00f;
    this->ZoomMouseLookInputScaleYaw = 1.00f;
    this->ZoomMouseLookInputScalePitch = 1.00f;
}

