#include "SwWorldMapRawInputs.h"

FSwWorldMapRawInputs::FSwWorldMapRawInputs() {
    this->ZoomAxis = 0.00f;
    this->YawAxis = 0.00f;
    this->PitchAxis = 0.00f;
    this->bIsInputDisabled = false;
    this->bRightBumperDown = false;
    this->bLeftBumperDown = false;
    this->bNextSelectionDown = false;
    this->bPreviousSelectionDown = false;
}

