#include "RsContinuousInterpolatorFunctionLibrary.h"

FVector URsContinuousInterpolatorFunctionLibrary::RsContinuousInterpVector(const FVector CurrentValue, const FVector TargetValue, const float DeltaTime, const float SmoothTime, const float SmoothTimeInterpPercentage) {
    return FVector{};
}

FRotator URsContinuousInterpolatorFunctionLibrary::RsContinuousInterpRotator(const FRotator CurrentValue, const FRotator TargetValue, const float DeltaTime, const float SmoothTime, const float SmoothTimeInterpPercentage) {
    return FRotator{};
}

float URsContinuousInterpolatorFunctionLibrary::RsContinuousInterpFloat(const float CurrentValue, const float TargetValue, const float DeltaTime, const float SmoothTime, const float SmoothTimeInterpPercentage) {
    return 0.0f;
}

URsContinuousInterpolatorFunctionLibrary::URsContinuousInterpolatorFunctionLibrary() {
    // Null default object.
}

