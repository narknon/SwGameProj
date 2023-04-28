#include "RsImpactEffectSurface.h"

FRsImpactEffectSurface::FRsImpactEffectSurface() {
    this->LightSaberImpact = false;
    this->ImpactSound = NULL;
    this->SurfaceEffectTable = NULL;
    this->ForceFeedbackIntensity = 0.00f;
    this->ForceFeedbackDuration = 0.00f;
    this->UsesExplosionSpawnable = false;
}

