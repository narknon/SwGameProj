#include "RsWorldMapActorTypeDefaultData.h"

FRsWorldMapActorTypeDefaultData::FRsWorldMapActorTypeDefaultData() {
    this->bShouldOverrideDescriptionRow = false;
    this->TranslationMultiplier = 0.00f;
    this->DefaultPrimaryPriorityBucket = ERsWorldMapPIPrimaryPriorityBucket::Invalid;
    this->DefaultSecondaryPriority = ERsWorldMapPISecondaryPriority::Invalid;
}

