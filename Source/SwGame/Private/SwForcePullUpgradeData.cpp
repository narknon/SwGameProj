#include "SwForcePullUpgradeData.h"

FSwForcePullUpgradeData::FSwForcePullUpgradeData() {
    this->EffectType = NULL;
    this->ForcePullCastCharacterEvent = NULL;
    this->ForcePullCastCharacterStopEvent = NULL;
    this->ForcePullYankCharacterEvent = NULL;
    this->bShouldUseYankBubbleOnYank = false;
    this->bShouldUseYankBubbleOnTractorBeam = false;
    this->BubbleRadius = 0.00f;
}

