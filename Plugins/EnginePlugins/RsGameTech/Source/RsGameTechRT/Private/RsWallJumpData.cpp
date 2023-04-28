#include "RsWallJumpData.h"

FRsWallJumpData::FRsWallJumpData() {
    this->WallJumpAngleDegrees = 0.00f;
    this->WallJumpTagModifier = NULL;
    this->WallJumpAirModifier = NULL;
    this->WallJumpRotationModifier = NULL;
    this->WallJumpFallModifier = NULL;
    this->WallJumpBufferModifierDelay = 0.00f;
    this->WallJumpBufferModifierDuration = 0.00f;
    this->WallJumpBufferModifier = NULL;
    this->WallJumpWallReattachModifier = NULL;
    this->WallJumpWallReattachModifierTime = 0.00f;
    this->WallJumpLedgeDisableModifier = NULL;
    this->WallJumpLedgeDisableTime = 0.00f;
    this->WallJumpActionDisableModifier = NULL;
    this->WallJumpActionDisableTime = 0.00f;
    this->WallJumpForceLimitedAngleDoubleJumpModifier = NULL;
    this->WallJumpForceLimitedAngleDoubleJumpModifierDuration = 0.00f;
}

