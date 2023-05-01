#include "R4CameraBehavior_AvoidAreaAroundFocus.h"

UR4CameraBehavior_AvoidAreaAroundFocus::UR4CameraBehavior_AvoidAreaAroundFocus() {
    this->CameraAvoidDistance = 800.00f;
    this->AvoidanceCylinderBodyHeight = 200.00f;
    this->MinimumCameraDistance = 150.00f;
    this->MaximumCameraDistance = 700.00f;
}

