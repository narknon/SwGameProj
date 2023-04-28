#include "RsDefenseConditions.h"

FRsDefenseConditions::FRsDefenseConditions() {
    this->TotalBlockAmount = 0.00f;
    this->SpecialActionAtMax = false;
    this->RechargeStartDelay = 0.00f;
    this->RechargeStartDelayBlockBroken = 0.00f;
    this->RechargeStartDelayOnDamage = 0.00f;
    this->RechargeRate = 0.00f;
    this->MarkerRandomMinCount = 0;
    this->MarkerRandomMaxCount = 0;
    this->MarkerTimeOut = 0.00f;
    this->BlockHeading = 0.00f;
    this->bUseProjectileBlockArc = false;
    this->MaxAngleCosine = 0.00f;
    this->MaxProjectileAngleCosine = 0.00f;
}

