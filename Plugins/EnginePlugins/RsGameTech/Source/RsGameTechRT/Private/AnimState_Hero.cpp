#include "AnimState_Hero.h"

FAnimState_Hero::FAnimState_Hero() {
    this->CurrentNavState = ERsNavState::null;
    this->PreviousNavState = ERsNavState::null;
    this->PreviousValidNavState = ERsNavState::null;
    this->TimeInCurrentNavState = 0.00f;
}

