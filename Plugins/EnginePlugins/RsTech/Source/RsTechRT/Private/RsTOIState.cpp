#include "RsTOIState.h"

FVector URsTOIState::GetWorldSeparationAxis(float T) const {
    return FVector{};
}

float URsTOIState::GetTolerance() const {
    return 0.0f;
}

bool URsTOIState::GetTOISuccess() const {
    return false;
}

int32 URsTOIState::GetTOIIterations() const {
    return 0;
}

float URsTOIState::GetTOI() const {
    return 0.0f;
}

float URsTOIState::GetTimeRootCurrent() const {
    return 0.0f;
}

float URsTOIState::GetTimeRoot2() const {
    return 0.0f;
}

float URsTOIState::GetTimeRoot1() const {
    return 0.0f;
}

float URsTOIState::GetTime2() const {
    return 0.0f;
}

float URsTOIState::GetTime1() const {
    return 0.0f;
}

float URsTOIState::GetTargetSeparation() const {
    return 0.0f;
}

ERsTOIState URsTOIState::GetState() const {
    return ERsTOIState::TOIS_NOT_STARTED;
}

FVector URsTOIState::GetSeparationVertex(float T) const {
    return FVector{};
}

float URsTOIState::GetSeparationTimeRoot() const {
    return 0.0f;
}

float URsTOIState::GetSeparationTime2() const {
    return 0.0f;
}

float URsTOIState::GetSeparationTime1() const {
    return 0.0f;
}

int32 URsTOIState::GetRootSolverIterations() const {
    return 0;
}

FVector URsTOIState::GetLocalSeparationAxis() const {
    return FVector{};
}

int32 URsTOIState::GetDeepestPointsIterations() const {
    return 0;
}

FVector URsTOIState::GetDeepestPointsAxis2(float T) {
    return FVector{};
}

FVector URsTOIState::GetDeepestPointsAxis1(float T) {
    return FVector{};
}

FVector URsTOIState::GetDeepestPoint2(float T) const {
    return FVector{};
}

FVector URsTOIState::GetDeepestPoint1(float T) const {
    return FVector{};
}

URsTOIState::URsTOIState() {
    // Null default object.
}

