#include "SwDismembermentData.h"

FSwDismembermentData::FSwDismembermentData() {
    this->EndcapMesh = NULL;
    this->ParticleEffect = NULL;
    this->bAttachParticleEffect = false;
    this->LimbMesh = NULL;
    this->LimbLifetime = 0.00f;
    this->bModifyMaterialParameter = false;
    this->MaterialParameterStart = 0.00f;
    this->MaterialParameterRate = 0.00f;
    this->MaterialParameterStart2 = 0.00f;
    this->MaterialParameterRate2 = 0.00f;
}

