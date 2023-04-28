#include "RsIkAnimInstanceState.h"

FRsIkAnimInstanceState::FRsIkAnimInstanceState() {
    this->LastUsedHitCollider = ERsCharacterColliders::weaponRight_Collision;
    this->bAllowDefendingWeaponIk = false;
}

