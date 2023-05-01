#include "SwCIGTacticsService.h"


USwCIGTacticsService::USwCIGTacticsService() {
    this->CombatMoveLocation_ExcludeEnemiesOutsideLeaderRadius = 0.00f;
    this->bCombatMoveLocation_ClampToBattleBounds = true;
    this->CombatMoveLocation_ClampToBattleCenterRadius = 0.00f;
    this->CombatMoveLocation_AvoidBattleCenterLeaderAngle = 0.00f;
}

