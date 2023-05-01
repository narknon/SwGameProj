#include "SwWallRunSettings.h"

USwWallRunSettings::USwWallRunSettings() {
    this->SharedNavigationSettings = NULL;
    this->WallRunMinDistanceFromGround = 100.00f;
    this->bAllowMultipleWallRunsOnSameSide = true;
    this->bResetWallRunAfterJump = false;
    this->bEnableWallVerificationSweep = true;
    this->WallVerificationSweepLength = 100.00f;
    this->bDebugDrawWallVerificationSweep = false;
    this->MaxVerticalVelocity = 200.00f;
    this->bEnableAngledWallRun = false;
    this->VerticalEntranceVelocityForMinimumAngledWallRun = 150.00f;
    this->VerticalEntranceVelocityForMaximumAngledWallRun = 150.00f;
    this->AngledWallRunDuration = 1.00f;
    this->AngledWallRunMinimumAngleDegrees = 30.00f;
    this->AngledWallRunMaximumAngleDegrees = 30.00f;
    this->WallRunTime = 1.25f;
    this->WallRunExpiredTime = 0.50f;
    this->WallRunProximity = 10.00f;
    this->MinWallNormalAngleFromVertical = 86.00f;
    this->MaxWallNormalAngleFromVertical = 105.00f;
    this->WallNormalAngleContinuityThreshold = 48.00f;
    this->MinInputMagnitude = 0.10f;
    this->AttachInputGracePeriod = 1.00f;
    this->LostWallGracePeriod = 0.10f;
    this->WallRunDefaultCameraModifier = NULL;
    this->WallRunDownwardAngledCameraModifier = NULL;
    this->WallRunDownwardAngleOverTimeCameraModifier = NULL;
    this->WallRunExpiredModifier = NULL;
    this->DebugDrawGroundSweep = false;
    this->WallRunFallModifier = NULL;
    this->AttachWallJumpBufferTime = 0.20f;
    this->BufferWallJumpHeroStateModifier = NULL;
    this->DetachDoubleJumpDisableModifier = NULL;
    this->DetachDoubleJumpDisableModifierTime = 0.30f;
}

