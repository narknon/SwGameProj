#include "SwSuperJumpSettings.h"

USwSuperJumpSettings::USwSuperJumpSettings() {
    this->JumpVerticalDisplacement = 800.00f;
    this->JumpAscentHorizontalDisplacement = 200.00f;
    this->JumpAscentTime = 1.00f;
    this->JumpDescentHorizontalDisplacement = 200.00f;
    this->JumpDescentTime = 1.00f;
    this->JumpAscentCurve = NULL;
    this->JumpDescentCurve = NULL;
    this->JumpChargeTime = 2.00f;
    this->JumpChargeForceMeterUsage = ESwForceMeterUsage::ConsumeImmediately;
    this->JumpChargeRequiresForceMeter = true;
    this->EndChargeOnTakeDamage = true;
    this->EndJumpOnTakeDamage = true;
    this->DispatchPrematureJumpAscentCompleted = false;
}

