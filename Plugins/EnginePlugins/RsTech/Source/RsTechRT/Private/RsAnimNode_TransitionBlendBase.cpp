#include "RsAnimNode_TransitionBlendBase.h"

FRsAnimNode_TransitionBlendBase::FRsAnimNode_TransitionBlendBase() {
    this->bDisableFootPlacement = false;
    this->BodyBlendType = EAlphaBlendOption::Linear;
    this->bLeanHipTowardsSupportingFoot = false;
    this->HipLeaningFactor = 0.00f;
    this->HipOvershootFactor = 0.00f;
    this->FootBlendType = EAlphaBlendOption::Linear;
    this->bLockRotationOnLanded = false;
    this->bSwapFootMotionOrder = false;
    this->FootElevationCurve = NULL;
    this->FootElevation = 0.00f;
}

