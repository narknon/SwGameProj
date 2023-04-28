#include "RsAnimTwoBoneIK.h"

FRsAnimTwoBoneIK::FRsAnimTwoBoneIK() {
    this->TakeRotationFromEffectorSpace = false;
    this->MaintainEffectorRelativeRotation = false;
    this->AllowStretching = false;
    this->TweenTime = 0.00f;
    this->PlantedThreshold = 0.00f;
}

