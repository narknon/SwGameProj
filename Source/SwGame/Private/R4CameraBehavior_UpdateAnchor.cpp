#include "R4CameraBehavior_UpdateAnchor.h"

UR4CameraBehavior_UpdateAnchor::UR4CameraBehavior_UpdateAnchor() {
    this->AnchorBoneName = TEXT("origin");
    this->bRefBone = false;
    this->bApplySmoothing = false;
    this->RightLocationSmoothingLimit = -1.00f;
    this->LeftLocationSmoothingLimit = -1.00f;
    this->ForwardLocationSmoothingLimit = -1.00f;
    this->BackwardLocationSmoothingLimit = -1.00f;
    this->UpLocationSmoothingLimit = -1.00f;
    this->DownLocationSmoothingLimit = -1.00f;
    this->bCheckForCollision = true;
    this->bSmoothCollisionAdjustments = true;
    this->CollisionTraceRadius = 9.10f;
}

