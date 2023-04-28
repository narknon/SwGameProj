#include "SwSimpleDestructible_PhaseRadialDamageParameters.h"

FSwSimpleDestructible_PhaseRadialDamageParameters::FSwSimpleDestructible_PhaseRadialDamageParameters() {
    this->ApplyRadialDamage = false;
    this->TimeDelayToApplyDamage = 0.00f;
    this->Radius = 0.00f;
    this->DamagePoints = 0.00f;
    this->DamageType = NULL;
    this->DamageTypeInst = NULL;
}

