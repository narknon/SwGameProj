#include "SwCharacterDeathTestActor.h"

ASwCharacterDeathTestActor::ASwCharacterDeathTestActor() {
    this->IsActive = false;
    this->IdleTimeBeforeDeathTrigger = 0.00f;
    this->DeathDamageType = NULL;
    this->DeathDamageTypeInst = NULL;
}

