#include "AnimState_Ledge.h"

FAnimState_Ledge::FAnimState_Ledge() {
    this->LedgeEntryType = ERsLedgeEntryType::NO_ENTRY;
    this->EnteringConstrainedJumpDirection = ERsConstrainedJumpDirection::NONE;
    this->bSkipSpecialJumpEntranceAnimation = false;
    this->LedgeHeight = 0.00f;
    this->LedgeGroundHeight = 0.00f;
    this->bShouldLedgeHang = false;
    this->bShouldLedgeHangAtShimmyStart = false;
    this->bShouldLedgeHangAtShimmyEnd = false;
    this->FrontOfLedgeHeight = 0.00f;
    this->ShimmyProgressionDriver = 0.00f;
    this->ShimmyMovementDirection = ERsLedgeShimmyDirection::DIRECTION_NONE;
    this->bShouldPullup = false;
    this->LedgePullupAngle = 0.00f;
    this->bIsConstraintBlending = false;
    this->LedgeControllerIntent = 0.00f;
    this->LedgeReachMode = ERsLedgeReachMode::NOT_REACHING;
    this->LedgeReachAngle = 0.00f;
    this->bComingFromChimneyJump = false;
    this->bComingFromPhaseDash = false;
    this->bSprintMantleOrVault = false;
    this->bAirVault = false;
}

