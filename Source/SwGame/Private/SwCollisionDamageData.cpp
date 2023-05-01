#include "SwCollisionDamageData.h"

USwCollisionDamageData::USwCollisionDamageData() {
    this->bShouldAlwaysTakeDamageAgainstCharacter = false;
    this->MinSpeedToCollide = 500.00f;
    this->ThresholdAngle = 90.00f;
    this->HeadOnAngle = 45.00f;
    this->Decal = NULL;
    this->DecalLifetime = 10.00f;
    this->ShakeType = NULL;
    this->ShakeDistance = 500.00f;
    this->ControllerRumbleIntensity = 100.00f;
    this->ControllerRumbleDuration = 0.20f;
}

