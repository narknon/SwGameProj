#include "R4CameraBehavior_OffsetByDistanceFromAnchorToFocus.h"

UR4CameraBehavior_OffsetByDistanceFromAnchorToFocus::UR4CameraBehavior_OffsetByDistanceFromAnchorToFocus() {
    this->DistanceScaleFactor = 1.00f;
    this->bApplyDistanceOffset = true;
    this->bApplyHeightOffset = true;
    this->HeightOffsetDistanceScale = 1000.00f;
    this->HeightOffsetHeightScale = 100.00f;
    this->MinDistToTarget = 0.00f;
    this->bSetFloorNormalByDirectionToFocus = false;
    this->bOffsetFocusActorHeightByCollisionHeight = false;
    this->FocusActorHeightOffset = 0.00f;
}

