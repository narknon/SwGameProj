#include "SwLiftSlamActor.h"
#include "RsAbilityEffectVictimComponent.h"

ASwLiftSlamActor::ASwLiftSlamActor() {
    this->VictimComponent = CreateDefaultSubobject<URsAbilityEffectVictimComponent>(TEXT("RsAbilityEffectVictimComponent"));
}

