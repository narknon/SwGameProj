#include "RsGlobalJumpData.h"

FRsGlobalJumpData::FRsGlobalJumpData() {
    this->DisableClimbAutoGrabModifier = NULL;
    this->PostJumpDisableClimbAutoGrabDuration = 0.00f;
    this->DisableWallHangModifier = NULL;
    this->PostJumpDisableWallHangDuration = 0.00f;
    this->JumpDuringGraceWindowImpulseDelay = 0.00f;
}

