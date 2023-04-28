#include "RsLimbDismembermentData.h"

FRsLimbDismembermentData::FRsLimbDismembermentData() {
    this->DismemberActor = NULL;
    this->bHaveRandomAngularImpulse = false;
    this->RandomAngularImpulseMagnitude = 0.00f;
    this->LifeSpan = 0.00f;
    this->DismemberParticleEffect = NULL;
}

