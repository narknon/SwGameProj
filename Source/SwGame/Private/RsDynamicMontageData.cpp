#include "RsDynamicMontageData.h"

FRsDynamicMontageData::FRsDynamicMontageData() {
    this->AnimationAsset = NULL;
    this->StartPosition = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->Playrate = 0.00f;
    this->LoopCount = 0;
    this->BlendOutTriggerTime = 0.00f;
    this->TimeToStartMontageAt = 0.00f;
}

