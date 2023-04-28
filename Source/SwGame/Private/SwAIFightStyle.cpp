#include "SwAIFightStyle.h"

FSwAIFightStyle::FSwAIFightStyle() {
    this->bFallbackAfterActive = false;
    this->bMaintainMinPassiveDistance = false;
    this->bAlignToActiveSector = false;
    this->bCanStrafe = false;
    this->bCanMoveBackwards = false;
    this->bCanHaveFightTokenStolen = false;
    this->bCancelActiveBehaviorIgnoringDistanceIfTargetInSync = false;
}

