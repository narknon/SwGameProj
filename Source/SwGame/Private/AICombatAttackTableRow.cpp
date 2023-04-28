#include "AICombatAttackTableRow.h"

FAICombatAttackTableRow::FAICombatAttackTableRow() {
    this->StopChainAfterHit = false;
    this->SkipParryReaction = false;
    this->ForceAbility = NULL;
    this->ForcePushAIChance = 0;
    this->AltAttackAIChance = 0;
    this->BlendSpaceInput = ERsAIBlendspaceInputSource::Custom;
}

