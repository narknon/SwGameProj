#include "SwSpeederBikeWallCollisionInfo.h"

FSwSpeederBikeWallCollisionInfo::FSwSpeederBikeWallCollisionInfo() {
    this->TimeInContact = 0.00f;
    this->CollisionType = FSwSpeederBikeWallCollisionType::None;
    this->bIsScraping = false;
}

