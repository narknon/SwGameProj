#include "RsCameraShake.h"

FRsCameraShake::FRsCameraShake() {
    this->Shake = NULL;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->Falloff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
}

