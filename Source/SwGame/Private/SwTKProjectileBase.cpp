#include "SwTKProjectileBase.h"
#include "RsAbilityEffectVictimComponent.h"

ASwTKProjectileBase::ASwTKProjectileBase() {
    this->AbilityEffectVictim = CreateDefaultSubobject<URsAbilityEffectVictimComponent>(TEXT("RsAbilityEffectVictim"));
}

