#include "CombatAttackTableRow.h"

FCombatAttackTableRow::FCombatAttackTableRow() {
    this->SyncDefinition = NULL;
    this->bSwapMasterSlave = false;
    this->AttackState = NULL;
    this->AttackStatePtr = NULL;
    this->ParriedBlockDeplete = 0.00f;
}

