#include "ExplosionEmitterSpawnableData.h"

FExplosionEmitterSpawnableData::FExplosionEmitterSpawnableData() {
    this->ExplosionAudioEvent = NULL;
    this->DebrisAudioEvent = NULL;
    this->WhizzbyAudioEvent = NULL;
    this->ActivationDistanceThresholdInCm = 0.00f;
    this->DelayOnDebrisSoundsInSeconds = 0.00f;
    this->ExplosionDebrisLocationsCount = 0;
    this->ExplosionDebrisMaxRangeCM = 0.00f;
    this->ExplosionDebrisMinRangeCM = 0.00f;
    this->ExplosionWhizzbySpeedCentimetersPerSecond = 0.00f;
    this->ExplosionWhizzbyDistanceToTravelInCM = 0.00f;
    this->ExplosionWhizzbyLateralDistanceInCM = 0.00f;
    this->ManualDestroyDelay = 0.00f;
}

