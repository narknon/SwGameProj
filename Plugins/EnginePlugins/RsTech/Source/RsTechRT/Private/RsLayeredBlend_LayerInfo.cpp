#include "RsLayeredBlend_LayerInfo.h"

FRsLayeredBlend_LayerInfo::FRsLayeredBlend_LayerInfo() {
    this->PerBoneBlendWeights = NULL;
    this->bIsAdditive = false;
    this->bBlendRotationInMeshSpace = false;
    this->bBlockNotifiesInLowerLayers = false;
}

