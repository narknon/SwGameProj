#include "RsAnimLinkedIKChain.h"

FRsAnimLinkedIKChain::FRsAnimLinkedIKChain() {
    this->TakeRotationFromEffectorSpace = false;
    this->MaintainEffectorRelativeRotation = false;
    this->AllowStretching = false;
    this->RootInterpolateSpeed = 0.00f;
    this->TweenTime = 0.00f;
    this->PlantedThreshold = 0.00f;
}

