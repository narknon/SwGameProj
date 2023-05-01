#include "R4CameraBehavior_FrameWallJump.h"

AActor* UR4CameraBehavior_FrameWallJump::GetDirectionOverrideActor_Implementation() const {
    return NULL;
}

UR4CameraBehavior_FrameWallJump::UR4CameraBehavior_FrameWallJump() {
    this->OffsetDistance = 450.00f;
    this->OffsetAngle = 90.00f;
    this->OffsetObstructionThresholdAngle = 30.00f;
    this->LargeAngleBlendTimeIncrease = 0.75f;
    this->bAllowHorizontalMovement = true;
    this->HorizontalMovementDeadzone = 300.00f;
    this->HorizontalCounterMovementPercent = 0.00f;
    this->HorizontalSmoothingPercentage = 0.50f;
    this->HorizontalSmoothingTime = 0.60f;
    this->VerticalSmoothingPercentage = 0.60f;
    this->VerticalSmoothingTime = 0.50f;
    this->RotationSmoothingPercentage = 0.80f;
    this->RotationSmoothingTime = 0.20f;
    this->RotationDeadzoneYaw = 18.00f;
    this->RotationDeadzonePitch = 5.00f;
    this->RotationScaleYaw = 1.00f;
}

