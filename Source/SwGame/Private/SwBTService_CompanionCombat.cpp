#include "SwBTService_CompanionCombat.h"

USwBTService_CompanionCombat::USwBTService_CompanionCombat() {
    this->CombatMoveLocation_ExcludeEnemiesOutsideLeaderRadius = 0.00f;
    this->bCombatMoveLocation_ClampToBattleBounds = true;
    this->CombatMoveLocation_ClampToBattleCenterRadius = 0.00f;
    this->CombatMoveLocation_AvoidBattleCenterLeaderAngle = 0.00f;
}

