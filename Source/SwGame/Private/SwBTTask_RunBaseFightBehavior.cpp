#include "SwBTTask_RunBaseFightBehavior.h"

USwBTTask_RunBaseFightBehavior::USwBTTask_RunBaseFightBehavior() {
    this->bSetBlackboardKeyValueToNewTarget = true;
    this->bOverrideCharacterControllerAttackTarget = true;
    this->bOverrideCharacterControllerFocusTarget = true;
}

