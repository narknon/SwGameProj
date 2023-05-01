#include "R4CameraBehavior_AnchorToFocusActorWithLimits.h"

UR4CameraBehavior_AnchorToFocusActorWithLimits::UR4CameraBehavior_AnchorToFocusActorWithLimits() {
    this->bDisableDuringCameraTransitions = true;
    this->WaitTimeAfterTransition = 0.25f;
    this->FocusPercentageAtZero = 0.90f;
    this->FocusPercentageAtMaxDist = 0.50f;
    this->LargeEnemyFocusPercentageAtZero = -0.50f;
    this->LargeEnemyFocusPercentageAtMaxDist = -0.25f;
    this->bAnchorSmoothingEnabled = true;
    this->MaxDistanceToFocus = 400.00f;
    this->MaxHeightToFocus = 150.00f;
    this->FocusTimeOut = 2.00f;
    this->FocusTimeOutDead = 0.50f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.50f;
    this->BlendPercent = 0.70f;
}

