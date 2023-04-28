#include "RsIKOverride.h"

FRsIKOverride::FRsIKOverride() {
    this->IKBone = ERsIkBoneType::LeftFoot;
    this->bPlaceOffsetBoneAtGoal = false;
    this->bIgnoreForHipOffset = false;
    this->bOverrideBlendInTime = false;
    this->CustomBlendInTime = 0.00f;
}

