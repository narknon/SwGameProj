#include "RsMotionMatchOptions.h"

FRsMotionMatchOptions::FRsMotionMatchOptions() {
    this->BoneLocationWeight = 0.00f;
    this->BoneVelocityWeight = 0.00f;
    this->RootVelocityWeight = 0.00f;
    this->bRestrictPathToNavMesh = false;
    this->NavMeshDetectionTime = 0.00f;
    this->TrajectoryWeight = 0.00f;
    this->MaxPlayRateScale = 0.00f;
    this->MinPlayRateScale = 0.00f;
    this->SampleFrameInterval = 0;
}

