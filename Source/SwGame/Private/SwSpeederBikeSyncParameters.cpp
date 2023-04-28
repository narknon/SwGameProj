#include "SwSpeederBikeSyncParameters.h"

FSwSpeederBikeSyncParameters::FSwSpeederBikeSyncParameters() {
    this->SyncDef = NULL;
    this->ComponentsSyncBlendInTime = 0.00f;
    this->bAllowPiecewiseBlendForComponents = false;
    this->MontagesBlendInTime = 0.00f;
    this->MontagesBlendOutTime = 0.00f;
}

