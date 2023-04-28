#include "RsDamageFromPhysicsCollisionVelocityLimits.h"

FRsDamageFromPhysicsCollisionVelocityLimits::FRsDamageFromPhysicsCollisionVelocityLimits() {
    this->UseVelocityLimits = false;
    this->MinimumVelocity = 0.00f;
    this->MaximumVelocity = 0.00f;
}

