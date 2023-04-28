#include "RsPerBoneBlendInfo.h"

FRsPerBoneBlendInfo::FRsPerBoneBlendInfo() {
    this->BaseBlendTime = 0.00f;
    this->PerBoneBlendTimeMultipliers = NULL;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->BlendCustomCurve = NULL;
}

