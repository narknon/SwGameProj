#include "RsHitEvent.h"

FRsHitEvent::FRsHitEvent() {
    this->DamageTypeClass = NULL;
    this->HeroDamageFactor = 0.00f;
    this->HitCountMarker = 0.00f;
    this->Damage = 0.00f;
    this->BlockDepleteAmount = 0.00f;
    this->BlockMarkerAmount = 0.00f;
    this->BlockReactAngleCos = 0.00f;
    this->Unblockable = false;
    this->Undodgeable = false;
    this->SingleHit = false;
    this->bPowerStrike = false;
    this->NoDamageInSlowdown = false;
    this->DamageFriendlies = false;
    this->UniqueHitID = 0;
}

