#include "SwPullLevelObjectHeroCollisionData.h"

FSwPullLevelObjectHeroCollisionData::FSwPullLevelObjectHeroCollisionData() {
    this->bSetCollisionTweakForHero = false;
    this->CollisionTweaks = (ERsHeroCollisionTweaks)0;
    this->bDisableCollisionsBetweenHeroAndForcePulledObject = false;
}

