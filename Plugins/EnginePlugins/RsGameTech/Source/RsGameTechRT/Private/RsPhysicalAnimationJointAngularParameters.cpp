#include "RsPhysicalAnimationJointAngularParameters.h"

FRsPhysicalAnimationJointAngularParameters::FRsPhysicalAnimationJointAngularParameters() {
    this->Swing1LimitDegrees = 0.00f;
    this->Swing2LimitDegrees = 0.00f;
    this->Swing1Motion = ACM_Free;
    this->Swing2Motion = ACM_Free;
    this->TwistLimitDegrees = 0.00f;
    this->TwistMotion = ACM_Free;
}

