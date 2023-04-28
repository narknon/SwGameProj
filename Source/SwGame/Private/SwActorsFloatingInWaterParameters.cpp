#include "SwActorsFloatingInWaterParameters.h"

FSwActorsFloatingInWaterParameters::FSwActorsFloatingInWaterParameters() {
    this->DoNotActivate = false;
    this->DebugShowHeroRanges = false;
    this->DebugShowBasicInfoForEveryObject = false;
    this->DebugShowRotationalAlignment = false;
    this->DebugShowSpawningExclusionAreas = false;
    this->TotalNumberOfObjects = 0;
    this->InitialNumberOfObjectsOnX = 0;
    this->InitialNumberOfObjectsOnY = 0;
    this->InitialSpawningChancePercentage = 0.00f;
    this->HiResPoolSize = 0;
    this->LowResPoolSize = 0;
    this->MaximumDistanceFromHeroForAnyObject = 0.00f;
    this->DistanceFromHeroToStartDynamicSpawning = 0.00f;
    this->DistanceBelowWaterToSafelySpawnPool = 0.00f;
    this->HiResDistanceOnXBetweenActorsInPool = 0.00f;
    this->SurfaceAlignmentSpeed = 0.00f;
    this->LowResSurfaceAlignmentSpeed = 0.00f;
    this->HiResRotationAlignmentEnabled = false;
    this->HiResRotationAlignmentSpeed = 0.00f;
    this->LowResDistanceBelowWaterAfterActivation = 0.00f;
    this->MinimumDistanceBetweenTwoObjects = 0.00f;
    this->MinimumDistanceBetweenTwoObjectsVariation = 0.00f;
    this->UsablePartOfTheSurfaceCoef = 0.00f;
    this->WaterSurfaceOffset = 0.00f;
    this->WaterFlowDisabled = false;
    this->WaterFlowStrength = 0.00f;
}

