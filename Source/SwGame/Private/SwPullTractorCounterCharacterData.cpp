#include "SwPullTractorCounterCharacterData.h"

FSwPullTractorCounterCharacterData::FSwPullTractorCounterCharacterData() {
    this->bShouldApplyPhysicalAnimation = false;
    this->bShouldCounterOnDropInDistanceToCatch = false;
    this->DistanceToCounterOnDrop = 0.00f;
    this->CounterHitTime = 0.00f;
    this->DistanceToStartCatch = 0.00f;
    this->bShouldUnclampToNavMeshAfterEnter = false;
    this->bShouldConstraintMoveCharacter = false;
}

