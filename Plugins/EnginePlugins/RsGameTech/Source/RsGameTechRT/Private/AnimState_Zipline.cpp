#include "AnimState_Zipline.h"

FAnimState_Zipline::FAnimState_Zipline() {
    this->CurrentAttachmentState = ERsZiplineAttachmentState::Disabled;
    this->CurrentAnimationState = ERsZiplineAnimationState::NotAttached;
    this->MovementSpeed = 0.00f;
    this->MovementDirection = ERsZiplineMovementDirection::Descending;
    this->MovementMode = ERsZiplineMovementMode::Normal;
    this->bIsForcedBoost = false;
    this->bInputSufficientForBoost = false;
    this->EntryType = ERsZiplineEntryType::NoEntry;
    this->bComingFromPhaseDash = false;
}

