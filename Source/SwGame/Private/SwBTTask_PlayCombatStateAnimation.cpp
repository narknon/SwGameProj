#include "SwBTTask_PlayCombatStateAnimation.h"

USwBTTask_PlayCombatStateAnimation::USwBTTask_PlayCombatStateAnimation() {
    this->SyncDef = NULL;
    this->bSwapMasterAndSlaveForSync = false;
    this->BlendspaceInputSource = ERsAIBlendspaceInputSource::Custom;
    this->bMaintainCharacterMotion = false;
}

