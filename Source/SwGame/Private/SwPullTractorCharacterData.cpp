#include "SwPullTractorCharacterData.h"

FSwPullTractorCharacterData::FSwPullTractorCharacterData() {
    this->bIsAnimationDriven = false;
    this->AnimationDrivenRotationTime = 0.00f;
    this->bShouldApplyPhysicalAnimation = false;
    this->AmbientRotation = ESwPullAmbientRotationType::None;
    this->bShouldUnclampToNavMeshAfterEnter = false;
}

