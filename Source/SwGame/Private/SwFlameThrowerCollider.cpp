#include "SwFlameThrowerCollider.h"

USwFlameThrowerCollider::USwFlameThrowerCollider() {
    this->DominantAxis = EAxis::Y;
    this->CollisionTypes.AddDefaulted(1);
}

