#include "R4CameraBehavior_OffsetByPitchAngle.h"

UR4CameraBehavior_OffsetByPitchAngle::UR4CameraBehavior_OffsetByPitchAngle() {
    this->OffsetToModify = ERsCameraOffsetType::RsCameraOffsetType_CameraSpaceYaw;
    this->bModifyX = true;
    this->bModifyY = false;
    this->bModifyZ = false;
}

