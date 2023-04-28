#include "RsHitImpulse.h"

FRsHitImpulse::FRsHitImpulse() {
    this->HitImpulseType = 0;
    this->HitImpulseCategory = ERsHitImpulseType::HitImpulse_Damage;
    this->Duration = 0.00f;
    this->Distance = 0.00f;
}

