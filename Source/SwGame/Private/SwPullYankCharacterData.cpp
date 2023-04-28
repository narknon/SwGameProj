#include "SwPullYankCharacterData.h"

FSwPullYankCharacterData::FSwPullYankCharacterData() {
    this->bShouldPutInCombatState = false;
    this->bIsAnimationAdditive = false;
    this->bShouldRotate = false;
    this->bShouldClampToNavMesh = false;
    this->PullYankDistance = 0.00f;
}

