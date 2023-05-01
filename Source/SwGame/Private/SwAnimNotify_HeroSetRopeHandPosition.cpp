#include "SwAnimNotify_HeroSetRopeHandPosition.h"

USwAnimNotify_HeroSetRopeHandPosition::USwAnimNotify_HeroSetRopeHandPosition() {
    this->HandPosition = ESwRopeAttachmentHandPosition::LeftHandUp;
    this->bUpdateHandAttachments = false;
    this->bLeftHandAttached = false;
    this->bRightHandAttached = false;
}

