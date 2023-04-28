#include "RsSyncData.h"

FRsSyncData::FRsSyncData() {
    this->bDontUseAsFallback = false;
    this->bUseHeroOffGroundFallback = false;
    this->Animation = NULL;
    this->BreakOnMontageBlendingOut = false;
    this->ContinueAnimationAfterSync = false;
    this->PutInState = ERsCombatState::Neutral;
}

