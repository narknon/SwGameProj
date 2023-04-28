#include "SyncTopologyRequestResult.h"

FSyncTopologyRequestResult::FSyncTopologyRequestResult() {
    this->bHasAllBoundsData = false;
    this->bIsWithinTopologyLimits = false;
    this->TopologyMinZ = 0.00f;
    this->TopologyMaxZ = 0.00f;
    this->TopologyYawAngle = 0.00f;
}

