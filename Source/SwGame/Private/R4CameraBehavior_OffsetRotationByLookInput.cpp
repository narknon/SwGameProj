#include "R4CameraBehavior_OffsetRotationByLookInput.h"

UR4CameraBehavior_OffsetRotationByLookInput::UR4CameraBehavior_OffsetRotationByLookInput() {
    this->MaxYawOffset = 0.00f;
    this->MaxPitchOffset = 0.00f;
    this->OffsetSmoothTime = 0.15f;
    this->bApplyOffsetInCameraSpace = true;
    this->SpringRatio = 0.70f;
    this->SpringInputDelay = 0.00f;
    this->bUseSpring = true;
    this->bGetMaxOffsetsFromSplineCamera = false;
}

