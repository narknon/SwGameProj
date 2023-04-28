#include "RsSurfaceEffect.h"

FRsSurfaceEffect::FRsSurfaceEffect() {
    this->DecalMaterialPtr = NULL;
    this->SimpleDecalMaterialPtr = NULL;
    this->DecalSize = 0.00f;
    this->DecalRandomSizeMax = 0.00f;
    this->DecalRandomRotationMax = 0.00f;
    this->DecalFadeStartDelay = 0.00f;
    this->DecalFadeDuration = 0.00f;
    this->DecalRampUpTime = 0.00f;
    this->ParticleEffectPtr = NULL;
    this->NiagaraParticleEffectPtr = NULL;
    this->DynamicDeformerPtr = NULL;
    this->NiagaraDeformationEffectPtr = NULL;
    this->EffectScale = 0.00f;
}

