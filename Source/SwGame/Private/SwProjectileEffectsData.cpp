#include "SwProjectileEffectsData.h"

FSwProjectileEffectsData::FSwProjectileEffectsData() {
    this->ProjectileEffect = NULL;
    this->NiagaraProjectileEffect = NULL;
    this->ProjectileStaticMesh = NULL;
    this->InitialSpeed = 0.00f;
    this->DamageType = NULL;
    this->DamageTable = NULL;
    this->bPenetrateOverlaps = false;
    this->bMakeAISoundOnSpawn = false;
    this->AISoundType = ERsAISoundType::Tiny;
    this->RadialInnerDamage = 0.00f;
    this->RadialOuterDamage = 0.00f;
    this->RadialInnerRadius = 0.00f;
    this->RadialOuterRadius = 0.00f;
    this->SpawnEffect = NULL;
    this->NiagaraSpawnEffect = NULL;
    this->SpawnSFX = NULL;
    this->FlybySoundFireDistance = 0.00f;
    this->FlybySFX = NULL;
    this->ReflectEffect = NULL;
    this->NiagaraReflectEffect = NULL;
    this->ReflectSFX = NULL;
    this->ReflectedImpactSFX = NULL;
    this->DeflectEffect = NULL;
    this->NiagaraDeflectEffect = NULL;
    this->DeflectSFX = NULL;
}

