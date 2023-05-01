#include "R4CameraBehavior_OffsetWhenIdle.h"

UR4CameraBehavior_OffsetWhenIdle::UR4CameraBehavior_OffsetWhenIdle() {
    this->DelayBeforeApplyingOffsets = 0.01f;
    this->EaseInTime = 10.00f;
    this->EaseOutTime = 0.50f;
}

