#include "SwWorldMapHologramSettings.h"

USwWorldMapHologramSettings::USwWorldMapHologramSettings() {
    this->SectorMapLandmarkMultiplier = 0.10f;
    this->SectorMapBorderMultiplier = 0.10f;
    this->DeadZoneMapRotate = 0.10f;
    this->DeadZoneMapZoom = 0.05f;
    this->DownSampleFactor = 2;
    this->bDownsampleBloom = true;
    this->BloomDownsampleFactor = 4;
    this->RumorEnterCurve = NULL;
    this->RumorIdleCurve = NULL;
    this->RumorExitCurve = NULL;
}

