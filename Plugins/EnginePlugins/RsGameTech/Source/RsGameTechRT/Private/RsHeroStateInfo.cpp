#include "RsHeroStateInfo.h"

FRsHeroStateInfo::FRsHeroStateInfo() {
    this->State = ERsNavState::null;
    this->CollisionTweaks = (ERsHeroCollisionTweaks)0;
    this->CameraModeDefinition = NULL;
    this->ReactionDefinition = NULL;
    this->MovementMode = MOVE_None;
}

