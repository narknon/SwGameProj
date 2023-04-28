#include "AnimState_WallHang.h"

FAnimState_WallHang::FAnimState_WallHang() {
    this->TimeInCurrentWallHangState = 0.00f;
    this->WallHangSlideTime = 0.00f;
    this->WallHangState = ERsPlayerWallHangState::NotWallHanging;
    this->WallSide = ERsCharacterWallSide::NotOnWall;
    this->WallRelativeInput = 0.00f;
    this->ChimneyWidth = 0.00f;
    this->bSkipEntryAnimation = false;
    this->bComingFromChimneyJump = false;
    this->bComingFromPhaseDash = false;
    this->bForcedWallSlide = false;
}

