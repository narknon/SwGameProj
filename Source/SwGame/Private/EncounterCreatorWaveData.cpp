#include "EncounterCreatorWaveData.h"

FEncounterCreatorWaveData::FEncounterCreatorWaveData() {
    this->CurrentWaveDelay = 0.00f;
    this->NextWaveDelay = 0.00f;
    this->EnemiesRemainingForNextWave = 0;
    this->IncludeAIInEnemiesRemaining = false;
}

