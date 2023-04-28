#include "SwRopeAttachmentDetectionCone.h"

FSwRopeAttachmentDetectionCone::FSwRopeAttachmentDetectionCone() {
    this->DetectionDistance = 0.00f;
    this->DetectionDistanceSpeedScaling = 0.00f;
    this->DetectionConeAngleDegrees = 0.00f;
    this->DetectionScoringAlignmentScaling = 0.00f;
    this->DetectionScoringDistanceScaling = 0.00f;
    this->DetectionDirection = ESwRopeAttachmentDetectionDirection::ActorForward;
}

