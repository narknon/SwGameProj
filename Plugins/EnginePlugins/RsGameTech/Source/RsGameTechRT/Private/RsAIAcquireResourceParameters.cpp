#include "RsAIAcquireResourceParameters.h"

FRsAIAcquireResourceParameters::FRsAIAcquireResourceParameters() {
    this->ResourceClass = NULL;
    this->bQueued = false;
    this->bTryOnce = false;
    this->Timeout = 0.00f;
    this->ResourceProvider = ERsAIResourceProvider::AttackTarget;
}

