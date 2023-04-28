#include "RsDamageInfo.h"

FRsDamageInfo::FRsDamageInfo() {
    this->K2_DamageTypeInst = NULL;
    this->Damage = 0.00f;
    this->ActualBlockDepleteAmount = 0.00f;
    this->LastTimeHit = 0.00f;
    this->LastHitReactTime = 0.00f;
    this->PlayDirectionalDamageReaction = false;
    this->DamageTypeClass = NULL;
    this->DamageEffectType = ERsDamageEffectType::Damaged;
}

