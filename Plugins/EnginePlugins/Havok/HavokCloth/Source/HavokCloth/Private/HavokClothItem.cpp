#include "HavokClothItem.h"

FHavokClothItem::FHavokClothItem() {
    this->bCollideWithWorldCollidables = false;
    this->bSupportsDynamicCollisions = false;
    this->bSupportsStaticCollisions = false;
    this->bCollideWithDynamicBodies = false;
    this->bCollideWithStaticBodies = false;
    this->bUsesMeshBoneDeform = false;
}

