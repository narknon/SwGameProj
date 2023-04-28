#include "RsPerformanceIndicatorOverlayBase.h"

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldMemIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldEnvironmentProcessingIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldEnvironmentDensityIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldDynamicEnvironmentIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldApplySimulationIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldActiveAIIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowRsWorldActiveActorsIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowNavMeshGenIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowGPUMemIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowGCIndicator() const {
    return false;
}

bool URsPerformanceIndicatorOverlayBase::ShouldShowDDCIndicator() const {
    return false;
}


ESlateVisibility URsPerformanceIndicatorOverlayBase::GetOverlayVisibility() const {
    return ESlateVisibility::Visible;
}

URsPerformanceIndicatorOverlayBase::URsPerformanceIndicatorOverlayBase() : UUserWidget(FObjectInitializer::Get()) {
    // Null default object.
}

