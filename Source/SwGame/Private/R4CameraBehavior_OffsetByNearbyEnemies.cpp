#include "R4CameraBehavior_OffsetByNearbyEnemies.h"

UR4CameraBehavior_OffsetByNearbyEnemies::UR4CameraBehavior_OffsetByNearbyEnemies() {
    this->EnemyMaxDistance = 1000.00f;
    this->EnemyMaxOffset = 500.00f;
    this->LargeEnemyMaxDistance = 1200.00f;
    this->LargeEnemyMaxOffset = 800.00f;
    this->SmoothingTime = 0.50f;
    this->SmoothingPercent = 0.70f;
}

