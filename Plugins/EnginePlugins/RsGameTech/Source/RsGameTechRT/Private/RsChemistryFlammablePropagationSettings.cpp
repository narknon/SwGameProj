#include "RsChemistryFlammablePropagationSettings.h"

FRsChemistryFlammablePropagationSettings::FRsChemistryFlammablePropagationSettings() {
    this->bCanPropagate = false;
    this->PropagationColliderType = ERsChemistryFlammableColliderType::Sphere;
    this->PropagationRadius = 0.00f;
    this->bCanBeIgnitedViaPropagation = false;
    this->IgnitionTime = 0.00f;
}

