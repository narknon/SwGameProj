#include "SwSlamCharacterVictimDataOverride.h"

FSwSlamCharacterVictimDataOverride::FSwSlamCharacterVictimDataOverride() {
    this->bShouldOverrideSlamType = false;
    this->SlamType = ESwSlamVictimType::Floored;
    this->bShouldOverrideSlamFloored = false;
}

