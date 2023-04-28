#include "RsAILocationSearchStrategy.h"

FRsAILocationSearchStrategy::FRsAILocationSearchStrategy() {
    this->DistancePolicy = ERsAIDistancePolicy::Ignore;
    this->bRequiresLOS = false;
    this->bMustBeInViewFrustum = false;
}

