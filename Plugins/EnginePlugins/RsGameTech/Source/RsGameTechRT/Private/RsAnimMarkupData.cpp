#include "RsAnimMarkupData.h"

FRsAnimMarkupData::FRsAnimMarkupData() {
    this->EndPoseDirectionality = ERsAnimEndPose::None;
    this->CombatSuctionOffset = 0.00f;
    this->PostActionMontage = NULL;
    this->bShouldCrouch = false;
    this->bProgressionHalfway = false;
}

