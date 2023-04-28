#include "RsAnimBalanceIKChain.h"

FRsAnimBalanceIKChain::FRsAnimBalanceIKChain() {
    this->MaxVelocity = 0.00f;
    this->TimeExtrapolate = 0.00f;
    this->LateralBiasThreshold = 0.00f;
    this->BalanceInterpolateSpeed = 0.00f;
    this->BalanceDistribution = 0.00f;
    this->BalanceLateralDistribution = 0.00f;
    this->BalanceVelocityDistribution = 0.00f;
}

