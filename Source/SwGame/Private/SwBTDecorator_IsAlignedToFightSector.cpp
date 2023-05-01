#include "SwBTDecorator_IsAlignedToFightSector.h"

USwBTDecorator_IsAlignedToFightSector::USwBTDecorator_IsAlignedToFightSector() {
    this->Sector = ESwAIFightSector::Inner;
    this->IgnoreAlignmentCharacterRadiusMultiplier = 1.50f;
}

