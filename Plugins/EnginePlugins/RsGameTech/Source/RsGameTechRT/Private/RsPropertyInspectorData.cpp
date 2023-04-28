#include "RsPropertyInspectorData.h"

FRsPropertyInspectorData::FRsPropertyInspectorData() {
    this->bPrimaryPriorityOverride = false;
    this->PrimaryPriorityBucket = ERsWorldMapPIPrimaryPriorityBucket::Invalid;
    this->bSecondaryPriorityOverride = false;
    this->SecondaryPriority = ERsWorldMapPISecondaryPriority::Invalid;
    this->bDescriptionRowOverride = false;
}

