#include "RsWorldMapInterpolatorLibrary.h"

FRsWorldMapInterpolationData_FVector URsWorldMapInterpolatorLibrary::MakeInterpolationData_FVector(FVector Start, FVector End, UCurveFloat* InterpolationCurve) {
    return FRsWorldMapInterpolationData_FVector{};
}

FRsWorldMapInterpolationData_float URsWorldMapInterpolatorLibrary::MakeInterpolationData_float(float Start, float End, UCurveFloat* InterpolationCurve) {
    return FRsWorldMapInterpolationData_float{};
}

FRsWorldMapInterpolationData_FVector URsWorldMapInterpolatorLibrary::Interpolate_FVector(const FRsWorldMapInterpolationData_FVector& InterpolationData, float InterpolationValue) {
    return FRsWorldMapInterpolationData_FVector{};
}

FRsWorldMapInterpolationData_float URsWorldMapInterpolatorLibrary::Interpolate_float(const FRsWorldMapInterpolationData_float& InterpolationData, float InterpolationValue) {
    return FRsWorldMapInterpolationData_float{};
}

FRsWorldMapInterpolationData_FVector URsWorldMapInterpolatorLibrary::EndInterpolate_FVector(const FRsWorldMapInterpolationData_FVector& InterpolationData) {
    return FRsWorldMapInterpolationData_FVector{};
}

FRsWorldMapInterpolationData_float URsWorldMapInterpolatorLibrary::EndInterpolate_float(const FRsWorldMapInterpolationData_float& InterpolationData) {
    return FRsWorldMapInterpolationData_float{};
}

URsWorldMapInterpolatorLibrary::URsWorldMapInterpolatorLibrary() {
    // Null default object.
}

