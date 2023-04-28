#include "RsStickInputProcessing_InnerOuterDeadZone.h"

FRsStickInputProcessing_InnerOuterDeadZone::FRsStickInputProcessing_InnerOuterDeadZone() {
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->bIsNonDeadZoneInputReNormalized = false;
}

