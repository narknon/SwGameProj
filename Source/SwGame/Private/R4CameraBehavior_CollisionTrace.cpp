#include "R4CameraBehavior_CollisionTrace.h"

UR4CameraBehavior_CollisionTrace::UR4CameraBehavior_CollisionTrace() {
    this->TraceRadius = 9.00f;
    this->TraceOriginOffsetHeight = 0.00f;
    this->BackupTrackingPercentage = 0.70f;
    this->BackupTrackingTime = 0.50f;
    this->NavSurfaceOriginOffset = 20.00f;
    this->bUseBaseLocationAsTraceOrigin = false;
    this->bDoObstructionCheck = true;
    this->bStayAboveNavSurface = false;
    this->CollisionTraceBias = 5.00f;
}

