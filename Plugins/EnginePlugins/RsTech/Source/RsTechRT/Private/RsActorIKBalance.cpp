#include "RsActorIKBalance.h"

FRsActorIKBalance::FRsActorIKBalance() {
    this->TakeRotationFromEffectorSpace = false;
    this->MaintainEffectorRelativeRotation = false;
    this->AllowStretching = false;
    this->RootInterpolateSpeed = 0.00f;
    this->TweenTime = 0.00f;
    this->PlantedThreshold = 0.00f;
    this->MaxVelocity = 0.00f;
    this->TimeExtrapolate = 0.00f;
    this->LateralBiasThreshold = 0.00f;
    this->BalanceInterpolateSpeed = 0.00f;
    this->BalanceDistribution = 0.00f;
    this->BalanceLateralDistribution = 0.00f;
    this->BalanceVelocityDistribution = 0.00f;
}

