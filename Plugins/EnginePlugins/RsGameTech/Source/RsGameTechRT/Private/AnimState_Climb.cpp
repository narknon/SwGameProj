#include "AnimState_Climb.h"

FAnimState_Climb::FAnimState_Climb() {
    this->CurrentState = ERsClimbState::Disabled;
    this->ClimbEntryType = ERsClimbEntryType::NO_ENTRY;
    this->ClimbSurfaceType = ERsClimbSurfaceType::Wall;
    this->SurfaceTransitionType = ERsClimbSurfaceTransitionType::Direct;
    this->SurfaceTransitionTargetSurfaceType = ERsClimbSurfaceType::Wall;
    this->SurfaceTransitionClockwise = false;
    this->SurfaceTransitionDistance = 0.00f;
    this->bComingFromConstrainedJump = false;
    this->bShouldClimbHangAtMovementTarget = false;
    this->bHasRetargetedCurrentMovement = false;
    this->ClimbMovementProgressionDriver = 0.00f;
    this->ClimbMovementContinuation = false;
    this->ClimbPreviousMovementAngle = 0.00f;
    this->ClimbMovementAngleChange = 0.00f;
    this->CurrentPadMovementAngle = 0.00f;
    this->CurrentPadMovementAngleDifference = 0.00f;
    this->TimeInIdle = 0.00f;
}

