#include "RsCustomizationSlot.h"

FRsCustomizationSlot::FRsCustomizationSlot() {
    this->SlotType = ECustomizationSlot::EHeadSlot;
    this->MeshComponent = NULL;
    this->HavokClothComponent = NULL;
}

