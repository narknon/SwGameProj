#include "RsAINavLinkDescriptor.h"

FRsAINavLinkDescriptor::FRsAINavLinkDescriptor() {
    this->Direction = ENavLinkDirection::BothWays;
    this->SnapToEdgeRadius = 0.00f;
    this->SnapToGroundHeight = 0.00f;
    this->AreaClass = NULL;
    this->UserId = 0;
}

