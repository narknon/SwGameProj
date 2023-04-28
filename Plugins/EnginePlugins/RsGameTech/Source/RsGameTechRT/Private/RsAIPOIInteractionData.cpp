#include "RsAIPOIInteractionData.h"

FRsAIPOIInteractionData::FRsAIPOIInteractionData() {
    this->bUseCharacterTypeFilter = false;
    this->CharacterType = CharacterType_Default;
    this->bUseCustomBehaviorTree = false;
    this->bInjectCustomBehaviorTreeAsRoot = false;
    this->bHasPropagatedCharacterTypeFilter = false;
    this->bHasPropagatedMotionParmName = false;
    this->bHasPropagatedCustomBehaviorData = false;
}

