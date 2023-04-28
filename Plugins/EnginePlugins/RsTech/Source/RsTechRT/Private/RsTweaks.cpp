#include "RsTweaks.h"

URsTweaks* URsTweaks::MakeRsTweaks(const FName tweaksFilePath) {
    return NULL;
}

FVector URsTweaks::GetVector(bool& Success, const FName tweakName) const {
    return FVector{};
}

URsTweaks* URsTweaks::GetTweaks(const FName tweakName) const {
    return NULL;
}

FString URsTweaks::GetString(bool& Success, const FName tweakName) const {
    return TEXT("");
}

FRotator URsTweaks::GetRotator(bool& Success, const FName tweakName) const {
    return FRotator{};
}

FRsNuMagnitude URsTweaks::GetNonUniformMagnitude(bool& Success, const FName tweakName) const {
    return FRsNuMagnitude{};
}

FName URsTweaks::GetNameString(bool& Success, const FName tweakName) const {
    return NAME_None;
}

int32 URsTweaks::GetIntegerValue(bool& Success, const FName tweakName) const {
    return 0;
}

float URsTweaks::GetFloatValue(bool& Success, const FName tweakName) const {
    return 0.0f;
}

bool URsTweaks::GetBooleanValue(bool& Success, const FName tweakName) const {
    return false;
}

URsTweaks::URsTweaks() {
    // Null default object.
}

