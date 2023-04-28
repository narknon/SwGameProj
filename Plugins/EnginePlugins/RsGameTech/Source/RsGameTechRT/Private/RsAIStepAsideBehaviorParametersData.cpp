#include "RsAIStepAsideBehaviorParametersData.h"

FRsAIStepAsideBehaviorParametersData::FRsAIStepAsideBehaviorParametersData() {
    this->MaxDistanceFromPlayerToConsiderStepAside = 0.00f;
    this->MaxSecondsFromPlayerContactToConsiderStepAside = 0.00f;
    this->bAcceptNewStepAsideRequestsWhenNotIdle = false;
    this->bIsCanAcceptChangesToInProgressStepAsideRequests = false;
    this->MaxPermittedDirectionChangeRequestDegrees = 0.00f;
    this->PlayerRadiusFudgeFactor = 0.00f;
    this->NpcRadiusFudgeFactor = 0.00f;
    this->AnticipatedStepAsideDistance = 0.00f;
    this->WallPolyMinDegreesFromGoalDirectionForCollision = 0.00f;
    this->PolyMaxDegreesFromUpVectorToBeConsideredFloor = 0.00f;
    this->PolyMaxDegreesFromDownVectorToBeConsideredCeiling = 0.00f;
    this->CollisionDetectionVoxelSampleRate = 0;
    this->CollisionDetectionVoxelSuperSampleRate = 0.00f;
    this->MaxPossibleCollisionCylinderRadius = 0.00f;
    this->MaxPossibleCollisionCylinderHeight = 0.00f;
    this->WorldQueryAabbFudgeFactor = 0.00f;
    this->DepthOfGeometryBelowAabbToEvaluateWhenLookingForHoles = 0.00f;
    this->HoleDetectionVoxelSizeAsAIDiameterRatio = 0.00f;
    this->VoxelHeightBelowAabbToQualifyAsHole = 0.00f;
    this->MaxNumHoleFindingIterations = 0;
    this->MinHoleVoxelNeighborValueAccumulation = 0;
}

