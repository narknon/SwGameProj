#include "SwProjectileAccuracyEntry.h"

FSwProjectileAccuracyEntry::FSwProjectileAccuracyEntry() {
    this->OffScreenShotsNum = 0;
    this->MissingShotsNum = 0;
    this->AccurateShotsNum = 0;
    this->AccurateSpreadingData = NULL;
    this->MissedSpreadingData = NULL;
    this->ExtendedMissedSpreadingData = NULL;
}

