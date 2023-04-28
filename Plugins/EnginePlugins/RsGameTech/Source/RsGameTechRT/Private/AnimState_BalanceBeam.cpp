#include "AnimState_BalanceBeam.h"

FAnimState_BalanceBeam::FAnimState_BalanceBeam() {
    this->bIsNearBeam = false;
    this->bIsJumpingIntoSwingBeam = false;
    this->bEnteringFromPhaseDashRight = false;
    this->bEnteringFromPhaseDashLeft = false;
    this->ApproxTimeToBeam = 0.00f;
    this->AngleRelativeToBeam = 0.00f;
    this->HeightRelativeToBeam = 0.00f;
    this->BalanceLeanAmount = 0.00f;
    this->MonkeySwingAmount = 0.00f;
    this->bIsParallelToBeam = false;
    this->bIsSwingingOnBeam = false;
    this->SwingBeamCharacterAngleDegrees = 0.00f;
    this->SwingBeamAngularSpeedDegrees = 0.00f;
    this->bSwingBeamJumpRequested = false;
}

