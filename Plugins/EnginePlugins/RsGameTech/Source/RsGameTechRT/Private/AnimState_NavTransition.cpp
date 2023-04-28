#include "AnimState_NavTransition.h"

FAnimState_NavTransition::FAnimState_NavTransition() {
    this->FromNavigationComponent = ERsCharacterNavigationComponentType::NC_FLAG_NONE;
    this->ToNavigationComponent = ERsCharacterNavigationComponentType::NC_FLAG_NONE;
}

