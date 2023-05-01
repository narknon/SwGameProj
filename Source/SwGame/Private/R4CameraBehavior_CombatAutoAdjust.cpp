#include "R4CameraBehavior_CombatAutoAdjust.h"

UR4CameraBehavior_CombatAutoAdjust::UR4CameraBehavior_CombatAutoAdjust() {
    this->bDisableDuringCameraTransitions = true;
    this->WaitTimeAfterTransition = 0.25f;
    this->YawDeltaTarget = 30.00f;
    this->YawDeltaIncrement = 20.00f;
    this->PitchDeltaTarget = 0.00f;
    this->PitchDeltaIncrement = 0.00f;
    this->SmoothingTime = 0.30f;
    this->SmoothingPercent = 0.50f;
    this->Timeout = 1.00f;
    this->NoAdjustTime = 1.00f;
    this->bAdjustForProjectiles = false;
    this->bAdjustForAttackBegin = true;
    this->bAdjustForAttackHit = true;
    this->YawDeadzone = 0.00f;
    this->PitchDeadzone = 0.00f;
}

