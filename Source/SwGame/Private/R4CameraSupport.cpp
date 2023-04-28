#include "R4CameraSupport.h"

FR4CameraSupport::FR4CameraSupport() {
    this->SupportDistance = 0.00f;
    this->LookAheadDistance = 0.00f;
    this->Width = 0.00f;
    this->Height = 0.00f;
    this->SampleRate = 0;
    this->SupportConvergence = 0.00f;
    this->OffsetScale = 0.00f;
    this->bIsEnabled = false;
    this->bDampenOscillations = false;
}

