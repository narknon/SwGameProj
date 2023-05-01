#include "SwDefenseState.h"






USwDefenseState::USwDefenseState() {
    this->bIsDefenseActive = true;
    this->ConfigurableDefenseType = ERsCombatState::Blocking;
    this->bHasTickImplemetation = false;
}

