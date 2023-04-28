#include "RsCharacterWallSweepParams.h"

FRsCharacterWallSweepParams::FRsCharacterWallSweepParams() {
    this->Character = NULL;
    this->MaximumWallDistance = 0.00f;
    this->TopSweepVerticalOffset = 0.00f;
    this->BottomSweepVerticalOffset = 0.00f;
    this->MinimumWallWidth = 0.00f;
    this->MaximumWallSlopeAngle = 0.00f;
    this->WallSweepChannel = ECC_WorldStatic;
    this->WallSweepRequiredNavigationPermissions = 0;
    this->WallSweepIgnoredNavigationPermissions = 0;
    this->WallSweepProbeRadius = 0.00f;
    this->DebugDrawSweepLifetime = 0.00f;
}

