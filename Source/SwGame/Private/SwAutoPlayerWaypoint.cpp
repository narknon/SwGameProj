#include "SwAutoPlayerWaypoint.h"

TEnumAsByte<ESwAutoPlayerActionType> ASwAutoPlayerWaypoint::GetActionType() const {
    return AP_None;
}

ASwAutoPlayerWaypoint::ASwAutoPlayerWaypoint() {
    this->ActionType = AP_None;
    this->PathType = AP_Pathfinder;
    this->ToleranceRadius = 100.00f;
    this->CanVisitDuringCombat = true;
}

