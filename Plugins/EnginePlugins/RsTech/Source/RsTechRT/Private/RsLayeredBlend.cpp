#include "RsLayeredBlend.h"

FRsLayeredBlend::FRsLayeredBlend() {
    this->Definition = NULL;
    this->BoneMaskOverrideBlendTime = 0.00f;
    this->bIgnoreInitialBlendingOnBecomeRelevant = false;
    this->bReorderPoseUpdateByRootWeight = false;
    this->bHasRelevantPoses = false;
    this->bBaseHasWeight = false;
}

