#include "SwPullCharacterYankVictimDataOverride.h"

FSwPullCharacterYankVictimDataOverride::FSwPullCharacterYankVictimDataOverride() {
    this->bOverride_PullYank = false;
    this->bOverride_bShouldPutInCombatState = false;
    this->bShouldPutInCombatState = false;
    this->bOverride_bIsAnimationAdditive = false;
    this->bIsAnimationAdditive = false;
    this->bOverride_bShouldRotate = false;
    this->bShouldRotate = false;
    this->bOverride_bShouldClampToNavMesh = false;
    this->bShouldClampToNavMesh = false;
    this->bOverride_PullYankDistance = false;
    this->PullYankDistance = 0.00f;
}

